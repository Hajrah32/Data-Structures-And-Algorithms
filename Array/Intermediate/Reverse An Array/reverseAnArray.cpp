#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,11,13,15,17,19};
    cout<<"Array: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    int i=0,j=9;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<endl;
    cout<<"Reversed Array: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
