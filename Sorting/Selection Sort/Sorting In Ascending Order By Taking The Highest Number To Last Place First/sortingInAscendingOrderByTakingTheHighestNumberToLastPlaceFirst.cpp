#include<iostream>
using namespace std;
void selectionSort(int arr[],int n);
void display(int arr[],int n);
int main(){
    int arr[]={9,7,3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    display(arr,n);
    return 0;
}
void selectionSort(int arr[],int n){
    int index;
    for(int i=n-1; i>0; i--){
        index=i;
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[index])
                index=j;
        }
        swap(arr[i],arr[index]);
    }
}
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}