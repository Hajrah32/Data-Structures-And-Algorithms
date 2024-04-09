#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int n); 
int main(){
    int arr[]={3,7,11,12,17,19,23,27,29};
    int key;
    cout<<"Enter a Number to Find: ";
    cin>>key;
    int pos=binarySearch(arr,key,sizeof(arr)/sizeof(arr[0])); 
    if(pos==-1){
        cout<<key<<" is not found in array";
    }
    else{
        cout<<key<<" is found at postion: "<<pos+1;
    }
    return 0;
}
int binarySearch(int arr[],int key,int n){
    int start=0, end=n-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key){
           end=mid-1;
        }    
        else{
            start=mid+1;
        }
    }
    return -1;
}