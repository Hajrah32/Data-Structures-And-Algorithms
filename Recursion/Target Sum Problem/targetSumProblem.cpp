#include<bits/stdc++.h>
using namespace std;
bool targetSum(vector<int> arr, int n,int total);
int main(){
    
    //vector<int>arr={5, 2, 3, 10, 6, 8};
    //vector<int>arr={2, 5, 1, 4, 3};
    vector<int>arr={9, 7, 0, 3, 9, 8, 6, 5, 7, 6};
    //vector<int>arr{1,0};
    int n=arr.size();
    int total=31;
    cout<<targetSum(arr,n,total);
    
    
    return 0;
}
bool targetSum(vector<int> arr, int n,int total){
    if(total==0)
        return 1;
    if(total<0 || n==0) 
        return 0;      
    return targetSum(arr,n-1,total) || targetSum(arr,n-1,total-arr[n-1]);
}
/*
Given an array arr of non-negative integers and an integer sum, 
the task is to check sum of any subset of the given array is equal to a given sum.

Example 1:

Input: 
N = 6
arr = [5, 2, 3, 10, 6, 8]
sum = 10
Output: 
1
Explanation: 
{5, 2, 3}, {2, 8}, {10} are possible subsets.
Example 2:
Input: 
N = 5
arr = [2, 5, 1, 4, 3]
sum = 10
Output: 
1
Explanation: 
{2, 1, 4, 3}, {5, 1, 4}, {2, 5, 3} are possible subsets.

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(N^2)

*/