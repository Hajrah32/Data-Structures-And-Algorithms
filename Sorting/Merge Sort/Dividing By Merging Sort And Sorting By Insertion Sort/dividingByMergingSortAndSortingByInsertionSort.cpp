#include<iostream>
using namespace std;

void mergeSort(int arr[], int start, int end);
void insertionSort(int arr[],int start, int end);

int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n);
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
void mergeSort(int arr[], int start, int end){
    if(start==end){
        return;
    }
    int mid=start + ((end-start)/2);
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    insertionSort(arr, start, end);
}
void insertionSort(int arr[],int start, int end){
    for(int i=start; i<end; i++){
        for(int j=i; j>=start; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=start; i<end; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
