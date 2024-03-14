#include<iostream>
using namespace std;
void selectionSort(char arr[],int n);
void display(char arr[],int n);
int main(){
    char arr[]={'z','b','a','o','r'};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    display(arr,n);
    return 0;
}
void selectionSort(char arr[],int n){
    int index;
    for(int i=0; i< n-1; i++){
        index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[i],arr[index]);
    }
}
void display(char arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}