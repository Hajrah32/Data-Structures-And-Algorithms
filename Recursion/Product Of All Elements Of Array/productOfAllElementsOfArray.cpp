#include<iostream>
using namespace std;
int productOfArray(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<productOfArray(arr,n-1);   
    return 0;
}
int productOfArray(int arr[],int n){
    if(n==0){
        return arr[n];
    }
    
    return (arr[n] * productOfArray(arr,n-1));
}