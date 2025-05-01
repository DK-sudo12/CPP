#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    int setdata();
    int getData1();
    int getData2();
};

int Base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class derived : public Base  //----> DERIVED CLASS. 
{
    int data3;

public:
    int process();
    int display();
};

int derived::process()
{
    data3 = data2 * getData1();
}

int derived::display()
{
    cout << "The value of getData1: " << getData1()<< endl;
    cout << "The value of data2: " << data2 << endl;
    cout << "the value of data3: " << data3 << endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}