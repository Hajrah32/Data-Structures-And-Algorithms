#include<iostream>
using namespace std;
int sum(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   cout<<"Sum: "<<sum(n);
    return 0;
}
int sum(int n){
    if(n==1){
       return 1; 
    }
    return n+sum(n-1);
}