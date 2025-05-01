//COPY CONSTRUCTOR.

#include<iostream>
using namespace std;

class number{
    int a=0;
    public:
    number(){}
    number(int num){
        a=num;
    }

    number(number &obj){            //---->when copy constructor not found,then compiler supply its own copy contructor;
        cout<<"copy constructor"<<endl;
        a=obj.a;
    }

    void printdata(void){
        cout <<"The number for this object is:"<<a<<endl;

    }
};


int main(){
    number o1,o2,o3(54),o5;
    o1.printdata();
    o2.printdata();
    o3.printdata();

    number o4(o1);
    o4.printdata();

    o5=o3; //copy constructor will not invoke

    number o6=o3;//copy constructor will invoke

    return 0;


}