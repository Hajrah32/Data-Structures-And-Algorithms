#include<iostream>
using namespace std;
int power(int n);
int main(){
   int n;
   cout<<"Enter Power: ";
   cin>>n;
   cout<<"Answer: "<<power(n);
    return 0;
}
int power(int n){
    
    if(n==0){
       return 1;        
    }
    return (2 * power(n-1));
}