/*
Create 2 classes:
    1. SimpleCalculatotor - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalcular - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculatotor
{

public:
    int a;
    int b;
    int setdata()
    {

        cout << "Enter the a value :" << endl;
        cin >> a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    int getdata()
    {
        cout << "The sum: " <<a+b<< endl;
        cout << "The subtarct: " << a - b << endl;
        cout << "The multiply: " << a * b << endl;
        cout << "The divide: " << a / b << endl;
    }
};

class ScientificCalcular
{
public:
    float c;
    setdata2()
    {
        cout << "Enter The value of c" << endl;
        cin >> c;
    }
    int getdata2()
    {
        cout << "The log value: " << log(c) << endl;
        cout << "The cos value: " << cos(c) << endl;
        cout << "The sin value: " << sin(c) << endl;
        cout << "the sqrt value: " << sqrt(c) << endl;
    }
};

class HybridCalculator : public SimpleCalculatotor, public ScientificCalcular
{
public:
    char i;
    int show()
    {
        cout << "press (r) for SimpleCalculatotor and press (p)for ScientificCalcular" << endl;
        cin >> i;

        switch (i)
        {
        case 'r':
            SimpleCalculatotor::setdata();
            SimpleCalculatotor::getdata();
            break;
        case 'p':
            ScientificCalcular::setdata2();
            ScientificCalcular::getdata2();
            break;
        default:
            cout << "The calculator" << endl;
            break;
        }
    }
};

int main(){
    HybridCalculator harry;
    harry.show();
    return 0;
}
