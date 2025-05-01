         //// perameterized constructor
// perameterized constructor which dosen't invoke automaticlly

#include <iostream>
using namespace std;

class construct
{
    int a, b;

public:
    construct(int, int);

    int print()
    {
        cout << "the complex no. is" << a << "+" << b << "i" << endl;
    }
};

construct::construct(int x, int y)    //---->perameterized constructor which dosen't invoke automaticlly
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    construct a(4, 5);
    a.print();
// explicit call
    construct b =construct (7, 6);
    b.print();

    return 0;
}