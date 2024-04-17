#include<iostream>
using namespace std;
int firstPosition(int arr[],int target,int n); 
int lastPosition(int arr[],int target,int n); 
int main(){
    int arr[]={2,3,3,3,3,4,5,6};
    int target;
    cout<<"Enter a Number to Find its First And Last Postion: ";
    cin>>target;
    int first=firstPosition(arr,target,sizeof(arr)/sizeof(arr[0])); 
    int last=lastPosition(arr,target,sizeof(arr)/sizeof(arr[0])); 
    cout<<"First and Last Postion of "<<target<<" :"<<first<<" and "<<last;
    return 0;
}
int firstPosition(int arr[],int target,int n){
    int first=-1;
    int start=0, end=n-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return first;
}
int lastPosition(int arr[],int target,int n){
    int last=-1;
    int start=0, end=n-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return last;
}