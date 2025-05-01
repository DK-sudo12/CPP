// FUNCTION TEMPLATE WITH FUNCTION TEMPLATE PERAMETER.

#include<iostream>
using namespace std;

template<class T1 , class T2 >

float fnAvarage(T1 a,T2 b){
    float avg= (a+b)/2;
    return avg;
}

// float fnAvarage2(int a,float b){
//     float avg2=(a+b/2);
//     return avg2;
// }
template<class T>
int swaap(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
float a=fnAvarage(2,3.5);
cout<<"The avg of the no is: \n"<<a<<endl;


int x=5;
int y=6;
swaap(x,y);
cout<<x<<endl<<y;

return 0;
}