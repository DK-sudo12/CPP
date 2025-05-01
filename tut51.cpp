#include <iostream>
using namespace std;

class complex
{
    int realnum;
    int imaginarynum;

public:
    void setdata(int a, int b)
    {
        realnum = a;
        imaginarynum = b;
    }

    void getdata()
    {
        cout << "the parts of realnum: " << realnum << endl;
        cout << "The part of imaginary: " << imaginarynum << endl;
    }
};
int main()
{
    // complex harry;
    // complex *ptr = &harry;
    complex *ptr = new complex;
    // (*ptr).setdata(10, 40);-----> ARROW OPATRETOR IS EXETLY SAME.
    ptr->setdata(10, 40);

    // (*ptr).getdata();
    ptr->getdata();

    return 0;
}