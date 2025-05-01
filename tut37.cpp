// SYNTAX OF INHERITANCE;

#include <iostream>
using namespace std;

class employe
{

public:
    int id;
    float salary;
    employe() {}
    employe(int inpid)
    {
        id = inpid;
        salary = 0.9;
    }
};
//  Derived class syntax
/* class {{derived class name }} : {{visibility-mode}} {{BASE class name}}
{
class member/methode/etc...
NOTE:
1> In DEFULT visibility will be private.

2> Public visibility mode : public member of the  BASE calss become public member of the derive class.

3> Private visibility mode: Public member of the BASE CLASS become private menber of the derive class.

4> The private member of BASE CLASS are never inherited.

}*/

class programer : public employe
{
public:
    int language = 9;
    programer(int inpid)
    {
        id = inpid;
        language = 9;
    }
    int getdata(void)
    {
        cout << id << endl;
    }
};

int main()
{
    employe o1(1), o2(2);
    cout << o1.salary << endl;
    cout << o2.salary << endl;
    programer o3(10);
    cout << o3.language << endl;
    o3.getdata();
    return 0;
}
