#include<bits/stdc++.h>
using namespace std;
bool divideArray(int arr[],int n);
int main(){
    int arr[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<divideArray(arr,n);
    return 0;
}
bool divideArray(int arr[],int n){
    int total=0;
    for(int i=0; i<n; i++){
        total+=arr[i];
    }
    int prefix=0;
    for(int i=0; i<n-1; i++){
        prefix+=arr[i];
        if(total==(prefix*2))
            return 1;
    }
    return 0;
}