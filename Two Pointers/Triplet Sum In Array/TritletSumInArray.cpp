#include<bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X);
int main(){
    //vector<int> vect={2,7,11,15,27};
    //vector<int> vect={1,2,4,6,18,25};
    int arr[]={1,4,45,6,10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Sum: ";
    cin>>target;
    cout<<find3Numbers(arr,n,target);
    return 0;
}
bool find3Numbers(int A[], int n, int X){
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
        }
    }
    for(int i=0; i< n-2; i++){
        int find=X-A[i];
        int start=i+1, end=n-1;
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
    return 0;
}