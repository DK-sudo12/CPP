// MAP--> MAP IS USED TO STORE KEY VALUE PAIR;

#include<iostream>
#include<map>
#include<string>
using namespace std;

//     map<string,int>:: iterator itr;
// void display(map<string,int> &mapi){
//      for (itr=mapi.begin();itr!=mapi.end(); itr++)
//     { 
//         cout<<(*itr).first<<"="<<(*itr).second<<"\n";
//     }
// }
int main(){
    map<string,int> marks;
    cout<<"HALF-YEARLY EXAM MARKS"<<endl;
    marks["dhriti"]=45;
    marks["pritivi"]=27;
    marks["nova"]=10;
    marks.insert({{"Kozume"s, 169.2}, {"Kuroo", 187.7}});
    map<string,int>:: iterator itr;
    for (itr=marks.begin();itr!=marks.end(); itr++)
    { 
        cout<<(*itr).first<<"="<<(*itr).second<<"\n";
    }
    cout<<"size of the list= "<<marks.size()<<endl;   
    cout<<"Maximum size of the list= "<<marks.max_size()<<endl;   
    cout<<"EMPTY of the list= "<<marks.empty()<<endl;   
    // display(marks);
return 0;
}