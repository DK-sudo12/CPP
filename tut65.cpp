// TEMPLATES WITH MULTIPLE PERAMETER

#include <iostream>
using namespace std;

template<class T1,class T2>//WE CAN USE ONE OR MORE PERAMETERS IN TEMPLATE.
class optimum
{
public:
    T1 data1;
    T2 data2;
    optimum(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<","<<this->data2<<endl;
    }
};
int main()
{
    optimum<int,float> obj(2,0.1);//HERE WE DECLEAR TWO DATA TYPE SO WE HAVE TO MAKE TWO PERAMETER IN TEMPLATE.
    obj.display();

    return 0;
}