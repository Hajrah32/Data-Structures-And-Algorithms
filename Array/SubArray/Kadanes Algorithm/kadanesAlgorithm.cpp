#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n);
int main(){
    //int arr[]={3,4,-2,5,8,20,-10,8};
    //int arr[]={4,-6,2,8};
    int arr[]={3,4,-5,8,-12,7,6,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<kadane(arr,n);
    return 0;
}
int kadane(int arr[],int n){
    int largest=INT_MIN, prefix=0;
    for(int i=0; i<n; i++){
        prefix+=arr[i];
        largest=max(prefix,largest);
        if(prefix<0)
            prefix=0;
    }
    return largest;
}