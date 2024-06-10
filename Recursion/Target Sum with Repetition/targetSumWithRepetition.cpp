#include<bits/stdc++.h>
using namespace std;
int targetSum(int arr[],int ind,int sum, int target);
int main(){
    
    //int arr[]={8,2,5,6,1};
    int arr[]={2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    cout<<targetSum(arr,n-1,0,target);
    
    
    return 0;
}
int targetSum(int arr[],int ind,int sum, int target){

    if(ind<0)
        return target==sum;
    if(sum>target)
        return 0;
    return targetSum(arr,ind-1,sum,target) + targetSum(arr,ind,sum+arr[ind],target);
}

/*

Given an array arr of non-negative integers and an integer sum, 
the task is to count all subsets of the given array with a sum equal to a given sum.

Example 1:

Input: 
N = 6
arr = [5, 2, 3, 10, 6, 8]
sum = 10
Output: 
3
Explanation: 
{5, 2, 3}, {2, 8}, {10} are possible subsets.
Example 2:
Input: 
N = 5
arr = [2, 5, 1, 4, 3]
sum = 10
Output: 
3
Explanation: 
{2, 1, 4, 3}, {5, 1, 4}, {2, 5, 3} are possible subsets.

TC: 2^n
*/