#include<iostream>
using namespace std;
int searchInsertPoistion(int arr[],int n,int target);
int main(){
    int arr[]={1,4,6,8,10,14,16,18};
    int target;
    cout<<"Enter a Number to find its Position in Array: ";
    cin>>target;
    int pos=searchInsertPoistion(arr,(sizeof(arr)/sizeof(arr[0])),target);
    cout<<"Right Position of "<<target<<" in array : "<<pos;
    return 0;
}
int searchInsertPoistion(int arr[],int n,int target){
    int start=0, end=n-1, index=n;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            index=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return index;
}