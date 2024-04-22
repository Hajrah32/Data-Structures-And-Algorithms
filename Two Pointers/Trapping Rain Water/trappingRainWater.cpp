#include<bits/stdc++.h>
using namespace std;
/*
Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
*/
long long trappingWater(int arr[], int n);
int main(){
    int arr[]={4,2,0,5,2,6,2,3};
    //int arr[] = {3,0,0,2,0,4};
    //int arr[] = {7,4,0,9};
    //int arr[] = {6,9,9};
    //int arr[]={8, 8, 2, 4, 5, 5, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<trappingWater(arr,n);
    return 0;
}
long long trappingWater(int arr[], int n){
    //Optimal Solution
    int l=0, r=n-1, leftMax=0, rightMax=0, water=0;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(arr[l]>leftMax)
                leftMax=arr[l];
            else    
                water += (leftMax-arr[l]);
            l++;
        }
        else{
            if(arr[r]>rightMax)
                rightMax=arr[r];
            else    
                water += (rightMax- arr[r]);
            r--;
        }
    }
    return water;
    
    
    
    //Better Solution
    /*
    long long sum=0;
    int max1=INT_MIN,j, max2=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max1){
            max1=arr[i];
            j=i;
        }    
    }
    for(int i=1; i<j; i++){
        max2=max(max2,arr[i]);
        sum+=max2-arr[i];
    }
    max2=arr[n-1];
    for(int i=n-2; i>j; i--){
        max2=max(max2,arr[i]);
        sum+=max2-arr[i];
    }
    return sum;
    */
}