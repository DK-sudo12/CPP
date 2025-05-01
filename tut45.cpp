// VIRTUAL BASE CLASS

#include <iostream>
using namespace std;

//

class student
{
protected:
    int rollno;

public:
    void setdata(int r1)
    {
        rollno = r1;
    }
    void getrollno()
    {
        cout << "The student roll no is: " << rollno << endl;
    }
};

class Test : virtual public student
{
protected:
    float math;
    float phy;

public:
    void setmarks(float a, float b)
    {
        math = a;
        phy = b;
    }
    void getmarks()
    {
        cout << "Your marks is declear below: "
             << "\nmath: " << math
             << "\nphysics: " << phy<<endl;
    }
};

class sport : virtual  public student
{
protected:
    float score;

public:
    void setscore(float s1)
    {
        score = s1;
    }
    void getscore()
    {
        cout << "The score in PT is: "<<score << endl;
    }
};

class result : public Test, public sport
{
public:
    void display(void)
    {
        getrollno();
        getmarks();
        getscore();
        cout<<"The total marks is: "<<math+phy+score<<endl;
    }
};

int main()
{
    result robin;
    robin.setdata(120);
    robin.setmarks(10, 9);
    robin.setscore(6);
    robin.display();

    return 0;
}