#include<iostream>
using namespace std;

class employ{
   private:
   int a,b,c; 
   public:
   int d,e;
   
   void setdata(int a1, int b2, int c3);
   void getdata(){
    cout<<"enter the value of a="<<a<<endl;
    cout<<"enter the value of b="<<b<<endl;
    cout<<"enter the value of c="<<c<<endl;
    cout<<"enter the value of d="<<d<<endl;
    cout<<"enter the value of e="<<e<<endl;
}

};

void employ :: setdata(int a1, int b2, int c3){
    a=a1;
    b=b2;
    c=c3;
}


int main(){
    employ dhritiman;
    dhritiman.d=10;
    dhritiman.e=7;
    dhritiman.setdata(1,2,3);
    dhritiman.getdata();
  

    return 0;
}

/*#include<iostream>
using namespace std;

class student {
    private:
    int rollno,marks,age;
    public:
    char fathersname,mothersname;int semister;
    void setdata(int rollno2,int marks3,int age4);
    void getdata(){
        cout<<"the candidate rollno is :"<<rollno<<endl;
        cout<<"the candidate marks is :"<<marks<<endl;
        cout<<"the candidate age is :"<<age<<endl;
        cout<<"the candidate fathersname is :"<<fathersname<<endl;
        cout<<"the candidate mothersname is :"<<mothersname<<endl;
        cout<<"the candidate semister is :"<<semister<<endl;

        }



};
void student::setdata(int rollno2,int marks3,int age4){
rollno=rollno2;
marks = marks3;
age=age4;
}
int main(){
    student harry;
    harry.fathersname= 'kk';
    harry.mothersname= 'lil';
    harry.semister=1;
    harry.setdata(40,150,18);
    harry.getdata();


    return 0;
}*/