////////////LOOP////////////
/*THERE IS A 3 TYPE OF LOOP
1> for loop
2> while loop
3> do-while loop*/
/* ------ SYNTAX OF FOR LOOP --------
for(initialisation,condition,updation) 1,
{
loop body (c++ code);
}*/

/*#include <iostream>
using namespace std;

int main(){
     for (int i=1;i < 100; i++)
    {
        cout<<i<<endl;


    }
    return 0;
}*/
                    /////////------- EXAMPLE OF INFINITE FOR LOOP -----------/// //////
/*#include <iostream>
using namespace std;

int main(){
    for (int i = 0; 34<=40; i++)
    {
        cout<<i<<endl;

    }


}   */

/////////-------WHILE LOOP-------//////////
/*#include<iostream>
using namespace std;

int main(){
    int i=1;
    /*while (i<=40)
    {
        cout<<i<<endl;
        i++;

    }

                ////////-----EXAMPLE OF INFINITE WHILE LOOP-----////////
  while (true)
  {
    cout<<i<<endl;
    i++;
  }
  return 0;
}*/

/////////-----do-while loop-----/////////
#include <iostream>
using namespace std;

int main(){
    int i=1;
    do
    {
        cout <<i<<endl;
        i++;
    } while (i<40);
    return 0;
    }

// TASK
/////--WRITE MULTIPLICATION TABLE OF 6 WITH THE HELP OF DO-WHILE LOOP--/////

/*#include<iostream>
using namespace std;

int main(){
    int i=1,n=6;
    do
    {
        cout<<i*n<<endl;
        i++;
    } while (i<=10);

}*/

/////--WRITE MULTIPLICATION TABLE OF 6 WITH THE HELP OF FOR LOOP--/////

/*#include <iostream>
using namespace std;

int main()
{
    for (int i = 1, n = 6; i <= 10; i++)
    {
        cout << i * n << endl;
    }
    return 0;
}*/