// THIS POINTER

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    // A& setData(int a)
    {
        this->a = a;
        // return *this;
    }
    // THIS IS A POINTER WHICH POINT AN OBJECT WHICH INVOKE MEMBER FUNCTION.
    void getaData()
    {
        cout << "Enter the value of a: " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(10).getaData();
    // a.getaData();
    // THIS POINTER CAN RETURN REFERANCE TO INVOKING OBJECT

    return 0;
}