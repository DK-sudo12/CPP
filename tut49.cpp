#include <iostream>
using namespace std;

/*Syntax of initialization list in constructor :
class base(arguments): (initialization-section)
{
    argument+other code;
}
*/
class tut49
{

    int a;
    int b;

public:
    // tut49(int x, int y): a(x),b(y+1)
    // tut49(int x, int y): a(x+y),b(y+x)
    //  tut49(int x, int y): a(x),b(y+a)--->This will don't show garbage value bcz it initialize after a.
    // tut49(int x, int y): a(x+b),b(y)--=>It will show garbage value bcz we initialize a first.
    // tut49(int x, int y) : a(x + b), b(y)
     tut49(int x, int y)  

    {
        a=x;
        b=y;
        cout << "constructor execute: " << endl;
        cout << "the value of a: " << a << endl;
        cout << "The value of b: " << b << endl;
    }
};

int main()
{
    tut49 c(1, 2);

    return 0;
}