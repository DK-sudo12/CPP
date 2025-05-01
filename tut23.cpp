                              /////----memory allocation------/////
//Using array in class.

#include <iostream>
using namespace std;

class shop
{
    int itemId [50];
    int itemprice [50];
    int counter;

public:
    void initcounter(void) { counter=0 ; }
    void setprice(void);
    void display(void);
};
void shop :: setprice(void)
{
    cout << "enter the item id :" << counter << endl;
    cin >> itemId[counter];
    cout << "enter the price of item :" << endl;
    cin >> itemprice[counter];
    counter++;
};
void shop :: display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with id:" << itemId[i] << "\nis:" << itemprice[i]<<endl;
    }
    cout<<endl;
};

int main()
{

    shop dhukan;
    dhukan.initcounter();
    dhukan.setprice();
    dhukan.setprice();
    dhukan.setprice();
    dhukan.display();


    return 0;
}