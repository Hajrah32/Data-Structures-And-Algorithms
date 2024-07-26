#include<bits/stdc++.h>
using namespace std;
vector<long long> nextSmallerElement(vector<long long> &arr, int n){
    stack<int>st;
    vector<long long> ans(n,-1);
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && arr[i]<arr[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=arr[st.top()];
        }
        st.push(i);
    }
    
    return ans;
}
int main(){
    vector<long long>arr={7,9,12,10,14,8,3,6,9};
    int n=arr.size();
    vector<long long> ans=nextSmallerElement(arr,n);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*
Given an circular array arr[ ] of size n having distinct elements, the task is to find the next smaller element for each element of the array .

Note : The next smaller element of an element in the array is the first smaller number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

 

Example 1:

Input: 
n = 4, arr[] = [1 3 2 4]
Output:
-1 2 -1 -1


Example 2:

Input: 
n = 5, arr[] = [6 8 0 1 3]
Output:
0 0 -1 -1 -1


Your Task:
This is a function problem. You only need to complete the function nextLargerElement() that takes list of integers arr[ ] and n as input parameters and returns list of integers of length N denoting the next greater elements for all the corresponding elements in the input array.

 

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)

 

Constraints:
1 ≤ n ≤ 106
0 ≤ arri ≤ 1018

*/