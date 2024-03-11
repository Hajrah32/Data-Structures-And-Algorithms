#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,21,13,15,-50,19};
    int ans=INT8_MAX;
    for(int i=0; i<10; i++){
        ans=min(arr[i],ans);
    }
    cout<<"Min: "<<ans;
    return 0;
}
