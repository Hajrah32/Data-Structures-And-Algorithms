#include<iostream>
using namespace std; 
int countZero(int arr[],int n);
int main(){
    int arr[]={0,0,0,0,0};
   // int arr[] = {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countZero(arr,n);
    
    return 0;
}
int countZero(int arr[],int n){
    int start=0, end=n-1, count=0;
    if(arr[end]==1){
        return 0;
    }
    else if(arr[start]==0){
        return n;
    }
    else{
        while(start<=end){
            int mid=start + ((end-start)/2);
            if(arr[mid]==1){
                start=mid+1;
            }
            else{
                count+=(end-mid)+1;
                end=mid-1;
            }
        }
    }
    return count;
}

