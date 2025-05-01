// CONSTRUCTOR WITH DEFULT ARGUMENT.

#include <iostream>
using namespace std;

class dhrit
{
    int a, b;

public:
    dhrit(int o1, int o2=12)
    {
        a = o1;
        b = o2;
    }
    int printdata()
    {
        cout << "The value of a and b is: " << a << "and" << b << endl;
    }
};
int main()
{   
    dhrit c(1);
    c.printdata();

    return 0;
}