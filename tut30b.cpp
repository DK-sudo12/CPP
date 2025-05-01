        //// perameterized constructor


#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y) //perameterized constructor which dosen't invoke auto
    {
        a = x;
        b = y;
    }

    int displaypoint()
    {
        cout << "the two points (" << a << "," << b << ")" << endl;
    }
};

int main()
{
    point a(2, 4);
    a.displaypoint();

    point b(5, 6);
    b.displaypoint();

    return 0;
}