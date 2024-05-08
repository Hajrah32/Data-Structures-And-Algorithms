#include<iostream>
using namespace std;
int sumOfSquare(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   cout<<"Sum Of Square: "<<sumOfSquare(n);
    return 0;
}
int sumOfSquare(int n){
    if(n==0){
        return 0;
    }
    return (n*n)+sumOfSquare(n-1);
    
}