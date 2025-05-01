// MULTIPLE INHERITANCE.

#include <iostream>
using namespace std;

/*class derived : visibility mode BASE CLASS,VISIBILITY mode BASE CLASS{
    CODE BODY
}*/

class Base1
{
    protected:
    int basenum1;

public:
    void setno1(int b1)
    {
        basenum1 = b1;
    }
};

class Base2
{
    protected:
    int basenum2;

public:
    void setno2(int b2)
    {
        basenum2 = b2;
    }
};

class Derived:public Base1,public Base2{
    public:
    int show(){
        cout<<"The value of Base 1: "<<basenum1<<endl;
        cout<<"The value of Base 2: "<<basenum2<<endl;
        cout<<"The sum of Base1 and Base2: "<<basenum1+basenum2<<endl;
    }
};

int main(){
    Derived dr;
    dr.setno1(15);
    dr.setno2(5);
    dr.show();

}