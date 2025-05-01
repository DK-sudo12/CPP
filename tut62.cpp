// this is second way to open file

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    // to write in file.
    ofstream out;
    out.open("tut60.txt");
    out << "this side kumar here" << endl;
    out << "this side chat gpt here" << endl;
    out.close();
    // to open and read the file
    ifstream in;
    string st;
    in.open("tut60.txt");
    // in>>st;
    // getline(in,st);
    // cout<<st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st;
    }

    return 0;
}