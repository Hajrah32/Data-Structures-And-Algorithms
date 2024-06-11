#include<bits/stdc++.h>
using namespace std;
void permutation(int arr[],vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited);
int main(){
    //int arr[]={1,2,3};
    int arr[]={4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<bool>visited(n,0);
    vector<int>temp;
    vector<vector<int>>ans;
    permutation(arr,temp,ans,visited);
    for(int i=0; i<ans.size(); i++){
        cout<<i+1<<":\t";
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
void permutation(int arr[],vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited){
    if(temp.size()==visited.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<visited.size(); i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permutation(arr,temp,ans,visited);
            temp.pop_back();
            visited[i]=0;
        }
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