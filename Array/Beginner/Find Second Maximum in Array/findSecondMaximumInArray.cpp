#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,21,13,15,-50,19};
    int maxi=INT8_MIN, secondMax=INT8_MIN;
    for(int i=0; i<10; i++){
        maxi=max(arr[i],maxi);
    }
    for(int i=0; i< 10; i++){
        if(arr[i]!=maxi){
            secondMax=max(arr[i],secondMax);
        }
    }
    cout<<"Second Maximum: "<<secondMax;
    return 0;
}
