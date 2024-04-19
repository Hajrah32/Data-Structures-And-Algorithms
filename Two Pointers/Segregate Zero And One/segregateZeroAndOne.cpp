#include<bits/stdc++.h>
using namespace std;
int main(){
    //int arr[]={1,0,1,0,1,0};
    int arr[]={1,0,0,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1;
    while(start<end){
        if(arr[start]==1){
            if(arr[end]==0){
                arr[start]=0;
                arr[end]=1;
                start++;
                end--;
            }
            else{
                end--;
            }
        }
        else{
            start++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}