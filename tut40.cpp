// MULTILEVEL INHERITANCE

#include <iostream>
using namespace std;9 

class student
{
    int rollno;

public:
    void setdata(int);
    void getdata(void);
};
void student::setdata(int r)
{
    rollno = r;
}
void student::getdata()
{
    cout << "The rollno is: " << rollno << endl;
}

class Exam : public student
{
protected:
    float math;
    float phy;

public:
    void setmarks(int,int);
    void getmarks();
};

void Exam::setmarks(int m1, int m2)
{
    math = m1;
    phy = m2;
}

void Exam::getmarks()
{
    cout << "The marks in math is " << math << endl;
    cout << "The marks in phy is " << phy << endl;
}

class result : public Exam
{
    float percentage;

public:
    void display()
    { 
      getdata();
      getmarks();
      cout<<"The percentage is: "<<(math+phy)/2<<endl;
    }
};

/*if we inherit B from A and C inherit from B [A----->B----->C]
1> A is a base class of B and B is base class of C.
2> A----->B----->C inheritance path .    */

int main()
{
    result ram;
    ram.setdata(230);
    ram.setmarks(80.0,90.6);
    ram.display();

    return 0;
}