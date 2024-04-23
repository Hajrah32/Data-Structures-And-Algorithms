#include<bits/stdc++.h>
using namespace std;
int largestSum(int arr[],int n);
int main(){
    int arr[]={3,4,-2,5,8,20,-10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largestSum(arr,n);
    return 0;
}
int largestSum(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0; i<n; i++){
        int  prefix=0;
        for(int j=i; j<n; j++){
            prefix+=arr[j];
            largest=max(prefix,largest);
        }
    }
    return largest;
}