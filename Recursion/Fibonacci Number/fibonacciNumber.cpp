#include<iostream>
using namespace std;
int fib(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   
   cout<<"Fibonacci Number: "<<fib(n);
   
    return 0;
}
int fib(int n) {
        if(n<=1){
            return n;
        }       
        return (fib(n-2)) + (fib(n-1)); 
    }