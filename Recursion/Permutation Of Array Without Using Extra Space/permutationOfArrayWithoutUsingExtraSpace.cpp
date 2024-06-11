#include<bits/stdc++.h>
using namespace std;
void permutation(int ind, vector<int>&arr,vector<vector<int>>&ans);
int main(){
    //vector<int>arr={4,5,6,7};
    vector<int>arr={1,2,3};
    int n=arr.size();
    vector<vector<int>>ans;
    permutation(0,arr,ans);
    for(int i=0; i<ans.size(); i++){
        cout<<i+1<<":\t";
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
void permutation(int ind,vector<int>&arr,vector<vector<int>>&ans){
    if(ind==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=ind; i<arr.size(); i++){
        swap(arr[i],arr[ind]);
        permutation(ind+1,arr,ans);
        swap(arr[i],arr[ind]);
    }
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