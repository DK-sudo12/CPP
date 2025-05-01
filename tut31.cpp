
// CONSTRUCTOR OVERLOADING ------>  A calss can contain two or more constructor wich have different perameters..

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()//----> Defult perameter;
    {
        a = 0;
        b = 0;
    }

    complex(int x)//---> one perameter;
    {
        a = x;
        b = 0;
    }

    complex(int x, int y)//---->Two perameter;
    {
        a = x;
        b = y;
    }

    int print()
    {
        cout << "The complex no. is:" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex o1(2, 5);
    o1.print();

    complex o2(2);
    o2.print();

    complex o3;
    o3.print();

    return 0;
}
