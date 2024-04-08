#include<iostream>
using namespace std;
void insertionSort(char arr[],int n);
void display(char arr[],int n);
int main(){
char arr[]={'z','b','a','o','r'};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    display(arr,n);
    return 0;
}
void insertionSort(char arr[],int n){
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
void display(char arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}