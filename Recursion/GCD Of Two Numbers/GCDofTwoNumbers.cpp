#include<iostream>
using namespace std;
int gcd(int a, int b);
/*

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/
int main(){
   int a,b;
   cout<<"Enter Two Numbers: ";
   cin>>a>>b;
   cout<<gcd(a,b);
   
    return 0;
}
int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}