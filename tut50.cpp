// REVISITING POINTER

#include <iostream>
using namespace std;

int main()
{

    // BASIC EXAMPLE
    int a = 4;
    int *ptr = &a;
    *ptr=900;
    cout << "the value of a is: " << *ptr << endl;

    // NEW OPARETOR.

    int *p = new int(140);
    cout << "the value of p is: " << *p << endl;

    /* DYNAMIC ALLOCATION EXAMPLE
    int *arr = new int[3];
    arr[0] = 10;
    // arr[1]=20;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout << "the value of arr: " << arr[0] << endl;
    cout << "the value of arr: " << arr[1] << endl;
    cout << "the value of arr: " << arr[2] << endl;*/

    // delete oparation ------> only dynamic allocated variable destroy by using delete oparator

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1]=20;
    *(arr + 1) = 20;
    arr[2] = 30;
    delete arr;
    cout << "the value of arr: " << arr[0] << endl;
    cout << "the value of arr: " << arr[1] << endl;
    cout << "the value of arr: " << arr[2] << endl;

}