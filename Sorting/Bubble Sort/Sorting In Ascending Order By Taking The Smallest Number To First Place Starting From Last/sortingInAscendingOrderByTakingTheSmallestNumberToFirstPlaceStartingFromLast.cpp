#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n);
void display(int arr[],int n);
int main(){
    int arr[]={7,4,8,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    display(arr,n);
    return 0;
}
void bubbleSort(int arr[],int n){
    for(int i=0; i<n;i++){
        for(int j=n-1; j>i; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}