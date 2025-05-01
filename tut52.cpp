// ARRAY OF OBJECT USING POINTER
#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData(void)
    {
        cout << "the id of the item: " << id << endl;
        cout << "the price of the item: " << price << endl;
    }
};
int main()
{
    // int size = 2;
    shop *ptr = new shop[2];
    // shop *ptrTemp = ptr;
    /*1 2 3 4
            ^
            |
            |
            ptr
    ptrTemp*/

    int p,i;
    float q;
    for ( i = 0; i < 2; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        *ptr++;
    }

    for (i = 0; i < 2; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptr->getData();
        *ptr++;
    }

    return 0;
}