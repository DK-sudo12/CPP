// CGPA Calculator
#include <iostream>
using namespace std;

class college
{
protected:
    float physics;
    float math;
    float chemistry;
    float b;

public:
    float setdata(float a, float b, float c)
    {
        physics = a;
        math = b;
        chemistry = c;
    }
    float getdata()
    {
        cout << "Enter the value of physics" << physics<<endl;
        cin >> physics;

        cout << "Enter the value of math" << math<<endl;
        cin >> math;

        cout << "Enter the value of physics" << chemistry<<endl;
        cin >> chemistry;

        cout << "Marks of physics: " << physics<<endl;
        cout << "Marks of physics: " << math<<endl;
        cout << "Marks of physics: " << chemistry<<endl;
    }
    float percentage()
    {
        b = (math + physics + chemistry) / 3;
        cout << "the percentage in all subject is: " << b<<endl;
    }

    float cgpa()
    {
        float e = 9.5;
        float f = b * e;
        cout << "THE CGPA OF STUDENT IS: " << f<<endl;
    }
};

int main()
{
    college rop;
    rop.getdata();
    rop.percentage();
    rop.cgpa();
}