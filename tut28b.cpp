// FRIEND FUNCTION
#include <iostream>
using namespace std;

class valu2;

class valu1
{
    int data;
    friend int exchange(valu1 &a, valu2 &b);

    public : 
    void setdata(int a)
    {
        data = a;
    }

    void display(void)
    {
        cout << data << endl;
    }
};

class valu2
{
    int data;

    friend int exchange(valu1 &a, valu2 &b);

        public :

        void setdata(int b)
    {
        data = b;
    }

    void display(void)
    {
        cout << data << endl;
    }
};

int exchange(valu1 &a, valu2 &b)
{
    int temp = a.data;
    a.data = b.data;
    b.data = temp;
}

int main()
{
    valu1 a1;
    valu2 b2;
    a1.setdata(34);
    b2.setdata(56);

    exchange(a1, b2);

    cout << "the value after changing of valu1 is: ";
    a1.display(); 
    cout << "the value after changing of valu2 is: ";
    b2.display(); 

    return 0;
}