//    friend funtion

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex setdatasum(complex o1, complex o2);

    void printdata()
    {
        cout << "your value is: " << a << "+" << b << "i" << endl;
    }
};

complex setdatasum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b+ o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;

    c1.setdata(1, 8);
    c1.printdata();
 
    c2.setdata(4, 4);
    c2.printdata();

    sum = setdatasum(c1, c2);
    sum.printdata();

    return 0;
}

    //////* some important point of friend funtion
/*1> NOT in the class scope
2> we can declear friend funtion inside the private or public
3>usually contain object as a argument
4>it healp's to funtion which access the private varuiable of class.*/

