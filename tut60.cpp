// FILE READ AND WRITE.
#include<iostream>
// #include<cstring>
#include<fstream>
// there are some useful class for work with files in c++ are:
// 1> fstreambase;
// 2> ofstream;----> Derive from fstreambase
// 3> ifstream;----> Derive from fstreambase

// In order work with files in c++,you will have to open it. primarlly,there
// is a 2 way to open a files;
// 1> using the constructor;
// 2> using the member function open() of the class;

using namespace std;
int main(){
    // string st="hello WORLD";
    string st2;

    // open files with contructor to write file.
    ofstream dk("tut60.txt");
    dk<<"hello world";
    dk.close();
    // open files with contructor to READ file.
    ifstream r("tut60.txt");
    // r>>st2;
    getline(r,st2);
    cout<<st2;
    dk.close()

return 0;
}