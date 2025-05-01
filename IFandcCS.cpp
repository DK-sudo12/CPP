            //////*******(imp)SELECTION STRUCTURE IF - ELSE LADER *****////////
/*#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"this game is not suitable for you";

    }
    else if(age==18){
        cout<<"you can play this game under some condition";
    }
    else if(age>18){
        cout<<"you can play this game";
    }

}*/
                    //////// SWITCH CASE STATEMENT//////////
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age-";
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"your age is 18"<<endl;
  
        break;
     case 20:
        cout<<"your age is 20"<<endl;
        break;
     case 50:
        cout<<"your age is 50"<<endl;
        break;
    
    
    default:
    cout<< "this age is not in our scope"<<endl;
        break;
    }
    cout<<"thank u for participate";
}