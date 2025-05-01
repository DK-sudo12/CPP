#include<iostream>
using namespace std;
// template<class T>
// class nope{
//     T data;
//     public:   
//     nope(T a){
//         data=a;
//     }
//     void display();
// };

// template <class T>
// void nope <T> :: display(){
//         cout<<"the value of data is: "<<data<<endl;
//     }

// AMBIGUITY
int function(int a){
    cout<<"I am the first function: "<<a<<endl;
}

template<class T>
int function1(T a){
    cout<<"I am the templatize function:"<<a<<endl;
}

int main(){
 function1(4.2);// THE NON TEMPALTIZED FUNCTION WILL RUN IN CASE OF FUNCTION OVERLOADING.

return 0;
}