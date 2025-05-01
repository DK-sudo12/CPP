#include<iostream>
using namespace std;

int sum(int a,int b);// ------> acceptable}---> concept of fundamenta prototype
int sum (int,int); //----> acceptable}---> concept of fundamenta prototype  
// int sum (int a,b) //----> NOT ACCEPTABLE
void g();

int main(){
    int num1,num2;
    cout<<"enter the value of num1:"<<endl;
    cin>> num1;
    cout<<"enter the value of num2:"<<endl;
    cin>>num2;

    cout<<"the value is:"<<sum (num1,num2);//-->(num1,num2)are the actual perameters
    g(); 

    return 0;
}

int sum(int a, int b){
    int c = a+b; //---> (a and b) are the formal premeters taking values from (num1,num2)
    return c;
}

void g(){   // if we don't want to write cout so we can use this concept 
    cout<<"\n good morning";
}
