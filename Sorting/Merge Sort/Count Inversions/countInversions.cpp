#include<iostream>
using namespace std;
/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/
int merge(int arr[],int start, int mid, int end);
int mergeSort(int arr[], int start, int end);
int main(){
    //int arr[]={1, 5, 4, 8, 10, 2, 6, 9, 12, 11, 3, 7};
    int arr[]={2, 4, 1, 3, 5};
    //int arr[]={2, 3, 4, 5, 6};
    //int arr[]={10,10,10};
    //int arr[]={3,7,10,14,18,19,2,11,16,17,23,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<mergeSort(arr,0,n-1)<<endl;
    
    return 0;
}

int merge(int arr[], int start, int mid, int end){
    int c=0;
    int mergeArr[end-start+1];
    int left=start, right=mid+1, index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            mergeArr[index]=arr[left];
            left++; 
            index++;

        }
        else{
            c+=mid-left+1;
            mergeArr[index]=arr[right];
            right++;
            index++;
        }
    }
        while(left<=mid){
            mergeArr[index]=arr[left];
            left++;
            index++;
        }
       
        while(right<=end){
            mergeArr[index]=arr[right];
            right++;
            index++;
    }
    index=0;
    while(start<=end){
        arr[start]=mergeArr[index];
        start++;
        index++;
    }
    return c;
}
int mergeSort(int arr[], int start, int end){
    if(start==end){
        return 0;
    }
    int mid=start + ((end-start)/2);
    int a=mergeSort(arr,start,mid);
    int b=mergeSort(arr,mid+1,end);
    int c=merge(arr,start,mid,end);
    return a+b+c;
}