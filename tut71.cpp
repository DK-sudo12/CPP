// VECTOR--> HAS FAST RENDOM ACCESS THEN LIST SO TAHT WHY WE USE VECTOR.BUT VECTOR HAS SLOW INSERTION AND DELETION

#include <iostream>
#include <vector>
using namespace std;

template<class T>
int display(vector<T> &v)
{
    cout<<"display the vector"<<endl;
    for (T i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<< " ";
    }
    cout << endl;
}
int main()
{

    // int element, size;
    // cout << "enter the the size of vector: ";
    // cin >> size;
    // vector<int> vec;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the value to add in vector: ";
    //     cin >> element;
    //     vec.push_back(element);
    // }

    // vec.erase(vec.begin(),vec.begin()+3); //----> it help to erase element from 1 to 3;
    // vec.erase(vec.begin()+2)//---> It help to remove pirticular element.

    // // vector<int>::iterator ite;
    // // ite= vec.begin();
    // // ite= vec.insert(ite+1,200);

    // // vec.pop_back();

    // display(vec);



    // // WAY TO MAKE VECTOR.

    // // vector<int> vec;//zero length vector. <--------1.
    // // display(vec); 

    vector<char> vec1(4);//vector with 4 size.<-------2.
    vec1.push_back(3);
    display(vec1);

    // vector<char> vec2(vec1);//vector with 4 size.<-------3.
    // // display(vec2);

    // vector<int> vec3(4,54);//vector with 4 size.<-------4.
    // display(vec3);
    
   
    return 0;
}