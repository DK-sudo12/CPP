/*#include<iostream>
using namespace std;

int main(){
int marks[4]={23,76,56,90};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

            // /---- another style to write ARRAY ----///

/*int mathmarks[3];
mathmarks[0]=234;
mathmarks[1]=500;
mathmarks[2]=600;

cout<<"the value of mathmarks:"<<mathmarks[0]<<endl;
cout<<"the value of mathmarks:"<<mathmarks[1]<<endl;
cout<<"the value of mathmarks:"<<mathmarks[2]<<endl;






        ///////---- ARRAY WITH THE HELP OF THE LOOP-----///////
         ///---FOR LOOP

for (int i = 0; i < 4; i++)
{
    cout<<marks[i]<<endl;
}
   return 0;
 }
   /////while loop array*/

#include<iostream>
using namespace std;

int main(){
    int marks[]={23,45,67,98};
    int i=0;
    while (i<=3)
    {
        cout<<"the value of marks is:" <<marks[i]<<endl;
        i++;

    }


    return 0;
}   

///////--- DO-WHILE LOOP
/*#include<iostream>
using namespace std;

int main(){
    int marks[]={43,56,12,34};
    int i=0;
    do
    {

       cout<<"the value of marks is:"<<marks[i]<<endl;
       i++;
    } while (i<=3);




    //  pointer and array*
 /*int *p= marks;
  *p++;
  cout<<*(p)<<endl;
  cout<<*(p+1)<<endl;
  cout<<*(p+2)<<endl;
  cout<<*(p+3)<<endl;*/

