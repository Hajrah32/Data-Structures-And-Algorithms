#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,21,13,15,-50,19};
    int mini=INT8_MAX, secondMin=INT8_MAX;
    for(int i=0; i<10; i++){
        mini=min(arr[i],mini);
    }
    for(int i=0; i< 10; i++){
        if(arr[i]!=mini){
            secondMin=min(arr[i],secondMin);
        }
    }
    cout<<"Second Minimum: "<<secondMin;
    return 0;
}
