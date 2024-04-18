#include<iostream>
using namespace std;
int peakIndex(int arr[],int n);
int main(){
    //int arr[]={2,4,6,8,10,8,5};
    //int arr[]={0,1,0};
    //int arr[]={0,2,1,0};
    //int arr[]={0,2,5,10};
    //int arr[]={10,5,2,1};
    //int arr[]={1,2,1,3,5,6,4};
    //int arr[]={1};
    int arr[]={1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int peak=peakIndex(arr,n);
    if(peak==-1){
        cout<<"There is no peak index";
    }
    else{
        cout<<arr[peak]<<" is peak index in mountain array";
    }
    return 0;
}
int peakIndex(int arr[],int n){
    int start=0, end=n-1,mid;
    while(start<=end){
        mid=end + ((start-end)/2);
        if((mid==0 || arr[mid]>arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1])){
            return mid;
        }
        else if(mid>0 && arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
   // return mid;
}