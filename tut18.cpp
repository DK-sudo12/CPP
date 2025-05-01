#include<iostream>
using namespace std;

int factorial (int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
    }

//  how compiler run the program process
//  factorial(4)= 4 * factorial(3)
//  factorial(4)= 4 * 3 factorial(2)
//  factorial(4)= 4 * 3 * 2 factorial(1)
//  factorial(4)= 4 * 3 * 2 *1


//recurtion is help to solve problem
// Factorial of number is:
// 6!= 6*5*4*3*2*1
// 5!= 5*4*3*2*1
// 0!= 1 by defination
// 1!= 1 by defination
// n!=n*(n-1)

int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<factorial(a);

    return 0;
}
                     /////// FIBONACE////////
/*#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);

}
 int factorial(int n){
    if (n<=1){
      return 1;
    }
  return n * factorial(n-1);  
  }


int main(){
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<a<<fib(a);

    return 0;
} */                    