// pointer to Object

#include <iostream>
using namespace std;

class Base
{
public:
    int var_baseclass;
    void display()
    {
        cout << "Display the base class variable: " << var_baseclass << endl;
    }
};

class Derive : public Base
{
public:
    int var_deriveclass;
    int display()
    {
        cout << "Display the base class variable: " << var_baseclass << endl;
        cout << "Display the derive class variable: " << var_deriveclass << endl;
    }
};
int main()
{
    Base *base_class_pointer;
    Base obj_basecalss;
    Derive obj_deriveclass;
    base_class_pointer = &obj_deriveclass;//--> Base class pointer can point derive calss object
    base_class_pointer->var_baseclass = 45;
    base_class_pointer->display();
    // base_class_pointer->var_deriveclass=334;//----> it will throw error bcz base class pointer can't access function and object of derive class.
    // base_class_pointer->display();

    Derive *derive_class_pointer;
    derive_class_pointer=&obj_deriveclass;
    derive_class_pointer->var_baseclass=240;
    derive_class_pointer->var_deriveclass=420;
    derive_class_pointer->display();



    return 0;
}