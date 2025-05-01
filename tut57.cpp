#include <iostream>
using namespace std;
class spacex
{
protected:
    int reachingTime;
    float distanceOfMoon;

public:
    spacex(int a, float b)
    {
        reachingTime = a;
        distanceOfMoon = b;
    }
    virtual void display() {}
};
class spacexCustomerRrview : public spacex
{
    float review;

public:
    spacexCustomerRrview(int a, float b, int c) : spacex(a, b)
    {
        review = c;
    }
    void display()
    {
        cout << "the time to reach people in spacecraft: " << reachingTime << endl;
        cout << "The time took to aproch moon: " << distanceOfMoon << endl;
        cout << "Review: " << review << " out of 5" << endl;
    }
};
class spacexCustomerAlive : public spacex
{
    char experience;

public:
    spacexCustomerAlive(int a, float b, char d) : spacex(a, b)
    {
        experience = d;
    }
//     void display()
//     {
//         cout << "the time to reach people in spacecraft: " << reachingTime << endl;
//         cout << "The time took to aproch moon: " << distanceOfMoon << endl;
//         cout << "experience: " << experience << "ood' out of good or bad" << endl;
//     }
};

/*class derived : public spacexCustomerRrview, public spacexCustomerAlive
{   public:
    char i;
    int show(){
        cout<<"press (A) if alive. Press (N) if not Alive"<<endl;
        cin>>i;
        switch (i)
        {
        case 'A':
            spacexCustomerRrview::display();
            spacexCustomerAlive::display();
            break;
        case 'N':
            cout<<"gaya khatam bye bye"<<endl;
            break;


        default:
        cout<<"Thank u for visiting spacex website"<<endl;
            break;
        }
    }
};*/
int main()
{
    int reachingTime;
    float distanceOfMoon, review;
    char experience;

    // for spacexCustomerRrview
    reachingTime = 10;
    distanceOfMoon = 380400;
    review = 4.5;
    spacexCustomerRrview obj_rating(reachingTime, distanceOfMoon, review);
    //  obj_rating.display();
    // for spacexCustomerAlive
    reachingTime = 10;
    distanceOfMoon = 380400;
    experience = 'g';
    spacexCustomerAlive obj_ex(reachingTime, distanceOfMoon, experience);
    // obj_ex.display();

    spacex* ptr[2];
    ptr[0]=&obj_rating;
    ptr[1]=&obj_ex;
    ptr[0]->display();
    ptr[1]->display();


    return 0;
}


// Rules for virtual functions
// 1>They cannot be static
// 2>They are accessed by object pointers
// 3>Virtual functions can be a friend of another class
// 4>A virtual function in the base class might not be used.
// 5>If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class