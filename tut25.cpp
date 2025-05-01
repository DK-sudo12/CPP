

#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "the employee is " << id << endl;
    }
};

int main()
{
    employee rohan;

    employee fb[4];

    for (int i = 0; i < 10; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}