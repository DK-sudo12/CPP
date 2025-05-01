#include <iostream>
using namespace std;

class y;

class x
{
    int data;

    friend int sum(x g1, y g2);

public:
    int setvalue(int value1)
    {
        data = value1;
    }
};

class y
{
    int data;

    friend int sum(x g1, y g2);

public:
    int setvalue(int value2)
    {
        data = value2;
    }
};

int sum(x g1, y g2)
{
    cout << "sum of the x and y class is :" << g1.data + g2.data << endl;
}

int main()
{
    x g1;
    g1.setvalue(4);

    y g2;
    g2.setvalue(6);

    sum(g1,g2);

    return 0;
}