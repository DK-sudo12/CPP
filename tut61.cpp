#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // ofstream out("tut60.txt");//--> conecting our file with out stream.
    // string name;
    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // out<<name;
    // out.close();


    ifstream in("tut60.txt");
    string comment;
    // in>>comment;
    getline(in,comment);
    cout<<"to read the comment: "<<comment;
    in.close();

return 0;
}