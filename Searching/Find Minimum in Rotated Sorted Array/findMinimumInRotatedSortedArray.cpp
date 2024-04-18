#include<iostream>
using namespace std;
int minimumInRotatedArray(int arr[],int n);
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum in Rotated Array : "<<minimumInRotatedArray(arr,n);
    return 0;
}
int minimumInRotatedArray(int arr[],int n){
    int small=arr[0], start=0, end=n-1;
    while(start<=end){
        int mid=end+ ((start-end)/2);
        if(arr[mid]<arr[0]){
            small=arr[mid];
            end=mid-1;
        }
        else{
        start=mid+1;
        }
    }
    return small;
}