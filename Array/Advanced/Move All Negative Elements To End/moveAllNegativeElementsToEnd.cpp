#include<iostream>
using namespace std;
int main(){
    int arr[]={-5, 7, -3, -4, 9, 10, -1, 11};
    //{1,-1,3,2,-7,-5,11,6};
    int n=8;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int tempArr[n];
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            tempArr[j]=arr[i];
            j++;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            tempArr[j]=arr[i];
            j++;
        }
    }
    /*
    taking time complexity = O(n^2) 
   int i=0;
   while(i<n-1){
        if(arr[i]<0 && arr[i+1]>=0){
            swap(arr[i],arr[i+1]);
            i--;
        }
        else
            i++;
    }
    */
    for(int i=0; i<n; i++){
        cout<<tempArr[i]<<" ";
    }
    return 0;
}
