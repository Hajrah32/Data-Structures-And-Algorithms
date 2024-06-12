#include<bits/stdc++.h>
using namespace std;
int waysToSum(vector<int>&arr, int sum);
int main(){
    
    vector<int>arr={1,5,6};
    int sum=7;
    int n=arr.size();
    cout<<waysToSum(arr,sum);
    
    return 0;
}
int waysToSum(vector<int>&arr, int sum){
    if(sum==0)
        return 1;  
    if(sum<0)
        return 0;
    int ans=0;
    for(int i=0; i<arr.size(); i++)
        ans+=waysToSum(arr,sum-arr[i]);   
    return ans;
}
/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]

TC: n*n!
SC: O(n)
*/