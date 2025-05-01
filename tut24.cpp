/// static data member of class employe
/*#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the employee id is: " << id<<" no.of employee count is:"<<count<<endl;
    }
};

int employee::count; //static variable dont start with '0'

int main()
{

    employee bhubanbam, rohan, vijay;
    bhubanbam.setdata();
    bhubanbam.getdata();

    rohan.setdata();
    rohan.getdata();

    vijay.setdata();
    vijay.getdata();

    return 0;
}*/



////static memder function

#include <iostream>
using namespace std;

class employee
{
    int id;   
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the employee id is: " << id << " no.of employee count is:" << count << endl;
    }
    static int getcount() ///---------> static member funtion
    {
        cout << "the value of count is:" << count <<endl;
    }
};

int employee::count = 50; // static variable dont start with '0'

int main()
{

    employee bhubanbam, rohan, vijay;
    bhubanbam.setdata();
    bhubanbam.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    
    vijay.setdata();
    vijay.getdata();
    employee::getcount();
    return 0;
}




/*#include <iostream>
using namespace std;

class employee
{
    int id;   
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the employee id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the employee id is: " << id << " no.of employee count is:" << count << endl;
    }
   
};

int employee::count; // static variable dont start with '0'

int main()
{

    employee titan[10];

    for (int i = 0; i < 10; i++)
    {
        titan[i].setdata();
        titan[i].getdata();
    }
    
    
    return 0;
}*/

