#include<iostream>
using namespace std;
int searchInRotatedArray(int arr[], int n, int target);
int main(){
    
   int arr[]={3,1};
   //{4,5,0,1,2,3,6};
   //{5,1,3};
   //{4,5,6,7,0,1,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int target;
   cout<<"Enter a Number to Search its position: ";
   cin>>target;
   cout<<searchInRotatedArray(arr,n,target);
   return 0;
}
int searchInRotatedArray(int arr[], int n, int target){
    int start=0, end=n-1;
    while(start<=end){
        int mid=start + ((end-start)/2); //0+ 2-0 /2   0+1
        if(arr[mid]==target)
            return mid;
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=target && arr[mid]>=target)
                end=mid-1;
            else
                start=mid+1;
        }
        else{
            if(arr[mid]<=target && arr[end]>=target)
                start=mid+1;
            else   
                end=mid-1;
        }
    }
    return -1;
}