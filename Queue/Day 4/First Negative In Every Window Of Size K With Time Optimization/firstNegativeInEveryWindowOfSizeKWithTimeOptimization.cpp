#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K){
    queue<int>q;
    vector<long long>ans;
    for(long long int i=0; i<K-1; i++){
        if(A[i]<0){
            q.push(i);
        }
        //cout<<A[i]<<" ";
    }
    for(long long int i=K-1; i<N;i++){
        if(A[i]<0){
            q.push(i);
        }
        if(!q.empty()){
            if((i-q.front()) >= K){
                q.pop();
            }
            if(q.empty()){
                ans.push_back(0);
            }
            else
                ans.push_back(A[q.front()]);
            
        }
        else{
            ans.push_back(0);
        }
        
    }
    return ans;
}
int main(){
    //long long int arr[]={-8, 2, 3, -6, 10};
    long long int arr[]={12, -1, -7, 8, -15, 30, 16, 28};
    long long int n=sizeof(arr)/sizeof(arr[0]);
    
    //long long int k=2;
    long long int k=3;
    vector<long long>ans=printFirstNegativeInteger(arr,n,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

 

Example 1:

Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
 
Example 2:
Input : 
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
Output :
-1 -1 -7 -15 -15 0 
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function printFirstNegativeInteger() which takes the array A[], its size N and an integer K as inputs and returns the first negative number in every window of size K starting from the first till the end. If a window does not contain a negative integer , then return 0 for that window.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(K)
*/