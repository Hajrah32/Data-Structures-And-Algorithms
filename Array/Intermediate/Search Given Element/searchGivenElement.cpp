#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,11,13,15,17,19};
    int index=-1;
    int search;
    cout<<"Enter element to search its location in array: ";
    cin>>search;
    for(int i=0; i<10; i++){
        if(arr[i]==search){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<search<<" is not found in array...";
    }
    else{
        cout<<search<<" is at position: "<<index;
    }
    return 0;
}
