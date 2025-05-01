              ///--- POINTER---///-->IT IS A VARIABLE WHICH STORED ADDRES OF OTHER VARIABLE;
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
///& -----> ADDRES OF OPERATOR;---->it's help us to show the addres variable;
    cout<<"addres of a is:"<<&a<<endl;
    cout<<"addres of b is:"<<&b<<endl;
///*----> DEREFFERENCE OPERATOR;--->IT'S HELP US TO KNOW TO THE VARIABLE VALUE;

    cout<<"value of a is:"<<a<<endl;
    cout<<"value of b is:"<<*b<<endl;
                  //////---- POINTER TO POINTER-----//////
    int** c=&b;
    cout<<"addres of b is:"<<&b<<endl;
    cout<<"addres of c is:"<<&c<<endl;
    cout<<"value of b is:"<<*b<<endl;  
    

        return 0;
}
        
