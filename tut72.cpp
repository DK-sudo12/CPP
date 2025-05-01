//LIST--> HELP IN FAST INSERTION/DELETION AS COMPARE TO VECTOR . FOR FAST INSERTION AND DELETION WE USE LIST. 

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
  list<int>:: iterator it;  
  for (it=lst.begin(); it != lst.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;
}
int main(){
    list<int>list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(3);
     
    display(list1);

    // FUNCTION TO REMOVE ELEMENTS
    // list1.pop_back();--> HELP TO REMOVE FROM BACK;
    // list1.pop_front() --> HELP TO REMOVE FROM FRONT;
    // list1.remove(7);---> THIS FUNCTION HELP TO REMOVE ELEMENT FROM EVERYWHERE;
 
    // list1.sort();---> SORTING  
   
    // list<int>:: iterator itr;-----> ANOTHER WAY TO DISPLAY
    // itr= list1.begin();
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    // cout<<*itr<<" ";
    // itr++;
    
    list<int>list2(3);//----> THIS IS THE ANOTHER WAY TO INSERT ELEMENT IN LIST
    list<int>:: iterator itr;
    itr= list2.begin();
    *itr=45;
     itr++;
    *itr=23;
     itr++;
    *itr=57;
     itr++;
     display(list2);
     
     list1.sort();
     display(list1);

     list2.sort();
     display(list2);

     list1.merge(list2);//----> THIS FUNCTION HELP US TO JOIN TWO LIST TOGETHER
     display(list1);
    

return 0;
}
