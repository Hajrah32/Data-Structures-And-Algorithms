#include<iostream>
using namespace std;
void printReverseArray(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printReverseArray(arr,n-1);   
    return 0;
}
void printReverseArray(int arr[],int n){
    if(n==0){
        cout<<arr[n]<<" ";
        return;
    }
    cout<<arr[n]<<" ";
    printReverseArray(arr,n-1);
    
}