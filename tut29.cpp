// constructor
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // the constructor is a spcial member funtion with same name of the class.
    // it is used to initialize the object of the class.
    // it automatically inviok whenever the  objects is created.
    complex(void);

    void print()
    {
        cout << "the complex no is: " << a << "+" << b << "i" << endl;
    }
};

complex::complex(void)    //---> defult constructor which automatically invoke
{
    a = 12;
    b = 34;
}

int main()
{
    complex c1;
    c1.print();

    return 0;
}

/*characterstic of constructor
1. we have to declear constructor in public section with same as a class.
2. it can have arguments.
3. it canot return values and don't return types.
4. it automatically invok whenever class is created.*/