/*#include <iostream>
using namespace std;
int c=45;
int main(){
    int a,b,c;
    cout<<"enter the value of a:"; 
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    c=a+b;
    cout<<"sum of the value c:"<<c<<endl;
    cout<<"global value of c:"<<::c;          // :: ----> scope resolution help to call out the global varialbe
    return 0;

}*/
                            // --------$$$------

/*#include <iostream>
using namespace std;

int main(){
    float a=45.5f;
    long double b=45.5l;
    cout<<"the size of 45.5  is:"<<sizeof(45.5)<<endl;
    cout<<"the size of 45.5 f is:"<<sizeof(45.5f)<<endl;
    cout<<"the size of 45.5 l is:"<<sizeof(45.5l)<<endl;
    cout<<"the size of 45.5 F is:"<<sizeof(45.5F)<<endl;
    cout<<"the size of 45.5  L is:"<<sizeof(45.5L)<<endl;

    return 0;
}*/

                ///////REFRENCE VARIABLE/////////

//  ROHAN ----> BABU -----> CHOTU -----> SILENT KILLER -----> DANGEROUS CODER 
/*#include <iostream>
using namespace std;

int main(){
    float x=455.5;
    float & y=x;


    cout<<"here is the value of x ="<<x<<endl;
    cout<<"here is the value of y="<<y<<endl;
}*/

                    //////TYPECASTING ///////
#include <iostream>
using namespace std;

int main(){
    float a=45.5;
    int b=45;
    
    cout<<"here is the value of a="<<b+int(a)<<endl;
    cout<<"here is the value of b="<<float(b)+a<<endl;
    cout<<"here is the value of a+b"<<a+b;
    return 0;

}