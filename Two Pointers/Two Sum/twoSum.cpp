#include<bits/stdc++.h>
using namespace std;
bool twoSum(int arr[], int n, int target);
int main(){
    //int arr[]={2,7,11,15,27};
    int arr[]={1,2,4,6,18,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Sum: ";
    cin>>target;
    cout<<twoSum(arr,n,target);
    return 0;
}
bool twoSum(int arr[], int n, int target){
    int start=0, end=n-1;
    while(start<end){
        int sum=arr[start]+arr[end];
        if(sum==target){
            return 1;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return 0;
}