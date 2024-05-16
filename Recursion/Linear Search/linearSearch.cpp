#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n, int x);
int main(){
    int arr[]={2,4,3,11,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter number:";
    cin>>x;
    cout<<linearSearch(arr,n-1,x);
    return 0;
}
bool linearSearch(int arr[],int n, int x){
    if(n==-1){
        return 0;
    }
    if(arr[n]==x){
        return 1;
    }
    
    return linearSearch(arr,n-1,x);
}

