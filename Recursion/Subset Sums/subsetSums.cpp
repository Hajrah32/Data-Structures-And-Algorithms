#include<bits/stdc++.h>
using namespace std;
void subsetSums(vector<int> arr, int n, int sum, int pick,vector<int> &ans);
int main(){
    //vector<int>arr={3,4,5};
    //vector<int>arr={2,3};
    vector<int>arr={5,2,1};
    int n=arr.size();
    vector<int>ans;
    
    subsetSums(arr,n-1,0,0,ans);
    cout<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}
void subsetSums(vector<int> arr, int n, int sum, int pick,vector<int> &ans){
    if(pick>n){
        ans.push_back(sum);
    return;
    }
    //cout<<temp<<" ";
    subsetSums(arr,n,sum,pick+1,ans);
    //cout<<temp<<" ";
    subsetSums(arr,n,sum+arr[pick],pick+1,ans);
}
/*
Given a list arr of n integers, return sums of all subsets in it. Output sums can be printed in any order.

 

Example 1:

Input:
n = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5.
Example 2:

Input:
n = 3
arr = {5, 2, 1}
Output:
0 1 2 3 5 6 7 8
Your Task:  
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer n as an input parameter and returns the list/vector of all the subset sums.

Expected Time Complexity: O(2^n)
Expected Auxiliary Space: O(2^n)

*/