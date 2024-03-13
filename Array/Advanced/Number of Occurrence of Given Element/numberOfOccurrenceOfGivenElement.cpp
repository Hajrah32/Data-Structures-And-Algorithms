#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,2,3};
    int n=7;
    int count=0;
    int num;
    cout<<"Enter a number to count its occurrence in array: ";
    cin>>num;
    for(int i=0; i<n; i++){
        if(arr[i]==num)
            count++;
    }
    cout<<"Total number of occurrence of "<<num<<" :"<<count;
    return 0;
}
