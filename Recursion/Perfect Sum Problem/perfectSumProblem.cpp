#include<bits/stdc++.h>
using namespace std;
int perfectSum(int arr[],int ind,int sum, int target);
int main(){
    
    //int arr[]={8,2,5,6,1};
    int arr[]={1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    cout<<perfectSum(arr,n-1,0,target);
    
    
    return 0;
}
int perfectSum(int arr[],int ind,int sum, int target){
    if(ind<0){
        cout<<"t: "<<target<<" s: "<<sum<<endl;
        return target==sum;
    }
    cout<<sum+arr[ind]<<" ";
    return perfectSum(arr,ind-1,sum,target) + perfectSum(arr,ind-1,sum+arr[ind],target);
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

/*
TC: 2^n
*/