#include<iostream>     /// inline function
using namespace std;

inline product(int a,int b){ // -----> topic no. one
/*int product(int a,int b){
    static int c=0;    //this will execute only one time
    c=c+1;*/
    return a*b;

}

int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;
    cout<<"the value of product is:"<<product(a,b)<<endl;

    return 0;
}


                          /////defult argumant////////
/*#include<iostream>
using namespace std;


int moneyRecive(int currentMoney,float factor=1.04){
    return currentMoney*factor;

}

int main(){
    int money =100000;
    cout<<"if you have monye"<<money<<"Rs in your bank acount.you will recive:"<<moneyRecive(money)<<"\n after1 YEAR"<<endl;
    cout<<"FOR VIP if you have monye"<<money<<"Rs in your bank acount.you will recive:"<<moneyRecive(money,1.1)<<" after1 Year"<<endl;

    return 0;
}                                


                               /// contant argument fomant//// -------> whe use const then it can't change the cnost value
                                /// FORMAT
   /*int strlen(cosnt char *p){


   } */                            