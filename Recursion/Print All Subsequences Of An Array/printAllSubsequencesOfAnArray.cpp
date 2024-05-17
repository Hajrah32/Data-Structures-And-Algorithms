#include<bits/stdc++.h>
using namespace std;
void subsequences(vector<int>& arr,int sum, int ind, int n, vector<int>& temp, vector<vector<int>> &pick);
int main(){
    //vector<int> arr={1,2,3};
    vector<int> arr={5,2,1};
    int n=arr.size();
    vector<int>temp;
    vector<vector<int>>pick;
    
    subsequences(arr,0,0,n,temp, pick);
    for(int i=0; i<pick.size(); i++){
        cout<<"{";
        for(int j=0; j<pick[i].size(); j++){
            cout<<pick[i][j];
        }
        cout<<"}\n";
    }
    return 0;
}
void subsequences(vector<int>& arr,int sum, int ind, int n, vector<int>& temp, vector<vector<int>> &pick){
    if(ind==n){
        pick.push_back(temp); 
        cout<<sum; 
        return;
    }
    subsequences(arr,sum,ind+1, n,temp,pick);
    temp.push_back(arr[ind]);  
    subsequences(arr,sum+arr[ind],ind+1, n,temp,pick);
    temp.pop_back();
}


/*
Given an integer array nums of unique elements, return all possible 
subsets (the power set). The solution set must not contain duplicate subsets. Return the solution in any order.
For example: Set={1,2,3} and its subsequence are: {{},{1},{2},{3},{1,2},{1,3},{2,3},{1,2,3}}.
For number of elements='n' there are total 2^n subsequences.
Time complexity : (2^(n+1))-1 = (2^(n))
Space Complexity: n (As I am passing all of the vectors as a refrence)

*/