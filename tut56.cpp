// VIRTUAL FUNCTION

#include <iostream>
using namespace std;
class base
{
    protected:
    int var_A_base;

public:
    void setdata(int a=89)
    {
        var_A_base = a;
    }
    virtual void getdata()
    {
        cout << "1 Display the variable of baseclass: " << var_A_base << endl;
    }
};

class derive:public base
{
    int var_derive;

public:
    void setdata(int b=45)
    {
        var_derive = b;
    }
    void getdata()
    {
        cout<<"2 Display the variable of deriveclass: "<<var_derive<<endl;
        cout << "2 Display the variable of baseclass: " << var_A_base << endl;
    }
};
int main()
{
    base *base_class_pointer;
    base  obj_basecalss;
    derive obj_deriveclass;
    base_class_pointer= &obj_deriveclass;
    base_class_pointer->getdata();

    return 0;
}