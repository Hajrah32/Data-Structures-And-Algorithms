#include<iostream>
using namespace std;
int factorial(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   if(n<0){
        cout<<"Factorial is not Possible";
        return 0;
   }
   cout<<"Factorial: "<<factorial(n);
   
    return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
    } 
    
    return n* factorial(n-1);
}