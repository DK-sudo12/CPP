#include<iostream>
using namespace std;

int sum(int a , int b){
    int c;
    c=a+b;
    return c;
}

// CALL BY VARIABLE WHICH DIDN'T WORK PROPARLY BCZ WE DIDN'T USE RFFERENCE VARIABLE

/*int swap( int a, int b){  //------> it does not swap
    int temp = a;   //4 4 8
     a = b;        //4 8 8`
     b = temp;    //4 8 4
}*/
  
// CALL BY REFRENCE WITH THE HELP OF REFRENCE VARIABLE AND ADDRESS OF VARIABLE

/*void swapPointer( int* a, int* b){  //------> it does swap the value with the help of pointer
    int temp = *a;   //4 4 8
     *a = *b;        //4 8 8
     *b = temp;    //4 8 4
}*/

void swapReffrenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    
}



int main(){
    int a=4,b=8;
    cout<<"the vlue of a : "<<a<<"the value of b :"<<b<<endl;
    // swapPointer(&a,&b);
    swapReffrenceVar(a,b);
    cout<<"the vlue of a : "<<a<<"the value of b :"<<b<<endl;
   
return 0;
}




    



   
