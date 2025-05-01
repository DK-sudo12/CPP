#include <iostream>
using namespace std;
// forward declaration
class complex;

class calculate
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumrealcalculate(complex, complex);
    int sumcomplexcalculate(complex, complex);
};

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    // we make individual object friend from calculate class  -----> 1st trick to make friend to access the pvt variable
    //  friend int calculate ::sumrealcalculate(complex g1, complex g2);
    //  friend int calculate ::sumcomplexcalculate(complex g1,complex g2);

    // we can make friend hole the object of the class -----> 2nd trick to make friend to access the pvt variable
         
    friend class calculate;

    void printdata()
    {
        cout << "your value is: " << a << "+" << b << "i" << endl;
    }
};

int calculate::sumrealcalculate(complex g1, complex g2)
{
    return (g1.a + g2.a);
}

int calculate::sumcomplexcalculate(complex g1, complex g2)
{
    return (g1.b + g2.b);
}

int main()
{
    complex g1, g2;
    g1.setdata(1, 8);
    g2.setdata(4, 5);

    calculate cal;

    int result = cal.sumrealcalculate(g1, g2);
    cout << "the sum of real no. g1 + g2:  " << result << endl;

    int sumE = cal.sumcomplexcalculate(g1, g2);
    cout << "the sum of complex no. g1 + g2: " << sumE << endl;

    return 0;
}



