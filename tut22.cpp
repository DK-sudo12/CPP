// nesting of memberfunction
#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    // void chek_bin(void);

public:
    void read(void);
    void chek_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "ENTER THE VALUE OF BINARY:" << endl;
    cin >> s;
}
void binary ::chek_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    { 
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{  chek_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "display your binary function   ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    // b.chek_bin();
    b.ones_compliment();
    b.display();

    return 0;
}


                         ////-----notes------//////

//  OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private
