#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,5,7,9,21,13,15,17,19};
    int ans=INT8_MIN;
    for(int i=0; i<10; i++){
        ans=max(arr[i],ans);
    }
    cout<<"Max: "<<ans;
    return 0;
}
