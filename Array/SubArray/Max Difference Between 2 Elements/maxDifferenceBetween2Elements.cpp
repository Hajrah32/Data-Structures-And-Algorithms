#include<bits/stdc++.h>
using namespace std;
int maxDiffernce(int arr[],int n);
int main(){
    
    int arr[]={9,5,8,12,2,3,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiffernce(arr,n);
    return 0;
}
int maxDiffernce(int arr[],int n){
    int suffix[n];
    suffix[n-1]=arr[n-1];
    int maxDiff=INT_MIN;
    for(int i=n-2; i>=0; i--){
        suffix[i]=max(arr[i],suffix[i+1]);
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        maxDiff=max(maxDiff,suffix[i+1]-arr[i]);
    }
    return maxDiff;
}