#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int start, int end, int x);
int main(){
    int arr[]={2,3,4,8,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter number:";
    cin>>x;
    cout<<binarySearch(arr,0,n-1,x);
    return 0;
}
bool binarySearch(int arr[],int start, int end, int x){
    if(start>end)
        return 0;
    int mid=(start + (end-start)/2);
    if(arr[mid]==x)
        return 1;
    else if(arr[mid]>x)
        return binarySearch(arr,start,mid-1,x);
    else    
        return binarySearch(arr,mid+1,end,x);
}

