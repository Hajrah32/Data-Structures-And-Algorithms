#include<iostream>
using namespace std;
int climbStairs(int n, int dp[]);
/*

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   int dp[n+1]={-1};
   for(int i=0; i<=n; i++){
    dp[i]=-1;
   }
   cout<<"Climbing Stairs: "<<climbStairs(n,dp);
   
    return 0;
}
int climbStairs(int n,int dp[]){
    if(dp[n]!=-1)
        return dp[n];
    if(n<=2)
        return dp[n]=n;
    return dp[n]=climbStairs(n-1, dp)+climbStairs(n-2, dp);
}