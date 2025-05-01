// AMBIGUITY

// MULTIPLE AMBIGUITY.........

/*#include <iostream>
using namespace std;

class BASE1
{
    public:
    int greet()
    {
        cout << "Chala ja bsdk" << endl;
    }
};

class BASE2
{
    public:
    int greet()
    {
        cout << "muh mai de dunga coco" << endl;
    }
};

class Derived : public BASE1, public BASE2
{

public:
    int show()
    {
        BASE1::greet();
    }
};

int
main()
{
   Derived rip;
   rip.show();
}*/

// SINGLE AMBIGUITY..............

#include <iostream>
using namespace std;

class base
{
    public:

    int setdata()
    {
        cout << "papa ki pari without wings" << endl;
    }
};

class Derived : public base
{
    public:
    int setdata()
    {
        cout << "hat bsdk" << endl;
    }
};
int main()
{
    Derived dk;
    dk.setdata();

    return 0;
}