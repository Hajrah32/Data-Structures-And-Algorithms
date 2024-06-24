#include<bits/stdc++.h>
using namespace std;
int main(){
    //1D Array:
    
    int *arr=new int [3];    
    for(int i=0;i<3;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
