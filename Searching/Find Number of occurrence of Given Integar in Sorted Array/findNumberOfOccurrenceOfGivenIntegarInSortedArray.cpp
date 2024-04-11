#include<iostream>
using namespace std; 
int numberOfOccurrence(int arr[],int n,int x);
int main(){
    int arr[]={1, 1, 2, 2, 2, 2, 3};
    int x;
   cout<<"Enter a Number to find its total occurrene in given array: ";
   cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Total Number of Occurrence of "<<x<<" : "<<numberOfOccurrence(arr,n,x);
    return 0;
}
int numberOfOccurrence(int arr[],int n,int x){
    int start=0, end=n-1;
    int s=-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==x){
            s=mid;
            end=mid-1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    start=0;
    end=n-1;
    int e=-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        if(arr[mid]==x){
            e=mid;
            start=mid+1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if((s==-1) && (e==-1)){
        return 0;
    }
    else{
        return (e - s) + 1;
    }
}

