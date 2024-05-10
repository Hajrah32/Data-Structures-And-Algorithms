#include<iostream>
using namespace std;
int maxElement(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxElement(arr,n-1);   
    return 0;
}
int maxElement(int arr[],int n){
    if(n==0){
        return arr[n];
    }
    
    return max(arr[n], maxElement(arr,n-1));
}