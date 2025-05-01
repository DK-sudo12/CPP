// FUNCTION OBJECT.

#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[4] = {3, 2, 4, 6};
    cout << "desending order" << endl;
    sort(arr, arr + 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "assending order" << endl;
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}