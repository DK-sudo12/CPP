// CONSTRUCTOR IN DERIVE CLASS.

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "The constructor of base1 is called "<<endl;
    }
    void printdata1()
    {
         cout << "The value of base1 " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "The constructor of base2 is called " <<endl;
    }
    int printdata2()
    {
        cout << "The value of base2 " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derived1;
    int derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
         cout << "the derived1 and derived2 constructor "<<endl;
    }

    int printderived()
    {
        printdata1();
        printdata2();
        cout << "the value derived1 and derived2 " << derived1<<"," << derived2 << endl;
    }
};

int main(){
    Derived hap(1,2,3,4);
    //  hap.printdata1();
    //  hap.printdata2();
     hap.printderived();

     return 0;
}