// CLASS TEMPLATE WITH DEFULT PERAMETER.

#include<iostream>
using namespace std;
template<class T1=int , class T2=float , class T3= char >

class tut66{ 
     T1 data1;
     T2 data2;
     T3 data3;
    public:
    tut66(T1 a, T2 b, T3 c){
        data1=a;
        data2=b;
        data3=c;
    }
    int display(){
        cout<<"The value of data1: "<<data1<<endl;
        cout<<"The value of data2: "<<data2<<endl;
        cout<<"The value of data3: "<<data3<<endl;
    }
};
int main(){
    tut66<> obj(6,3.4,'a');
    obj.display();

return 0;
}