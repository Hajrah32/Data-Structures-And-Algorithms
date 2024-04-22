#include<bits/stdc++.h>
using namespace std;
bool find4Numbers(int A[], int n, int X);
int main(){
    //int arr[]={2,7,11,15,27};
    //int arr[]={1,2,4,6,18,25};
    //int arr[]={1,4,45,6,10,8};
    int arr[]={1, 5, 1, 0, 6, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Sum: ";
    cin>>target;
    cout<<find4Numbers(arr,n,target);
    return 0;
}
bool find4Numbers(int A[], int n, int X){
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
        }
    }
    for(int i=0; i< n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int find=X-(A[i]+A[j]);
            int start=j+1, end=n-1;
            while(start<end){
                int sum=A[start]+A[end];
                if(sum==find){
                    return 1;
                }
                else if(sum>find){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
    }
    return 0;
}