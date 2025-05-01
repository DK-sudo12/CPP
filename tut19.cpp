                                  ///// funtion overloading
#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using with 2 argument"<<endl;
    return a+b;
}
int sum (int a, int b, int c){
    cout<<"using with 3 argument"<<endl;
    return a+b+c;
}
// the volume of cube

int cube(int a){
    return a*a*a;
}
// The volume of recatangle

int react(int l,int b,int h){
    return l*b*h;
}
// the volume of clynder
int clyn(double r , int h){
    return 3./14 * r*r*h;
}


int main(){
    cout<<"the peremeter 3 and 6"<<sum(3,6)<<endl;
    cout<<"the peremeter 3,4 and 6"<<sum(3,4,6)<<endl;
    cout<<"the volume cube"<<cube(4)<<endl;
    cout<<"the volume rectangle"<<react(5,6,7)<<endl;
    cout<<"the volume clynder"<<clyn(4,5)<<endl;

    return 0;
}