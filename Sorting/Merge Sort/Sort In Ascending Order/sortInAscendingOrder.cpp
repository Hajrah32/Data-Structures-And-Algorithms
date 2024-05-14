#include<iostream>
using namespace std;

void merge(int arr[],int start, int mid, int end);
void mergeSort(int arr[], int start, int end);
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
   
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}

void merge(int arr[], int start, int mid, int end){
    
    int mergeArr[end-start+1];
    int left=start, right=mid+1, index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            mergeArr[index]=arr[left];
            left++; 
            index++;

        }
        else{
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
}
void mergeSort(int arr[], int start, int end){
    if(start==end){
        return;
    }
    int mid=start + ((end-start)/2);
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end); 
}