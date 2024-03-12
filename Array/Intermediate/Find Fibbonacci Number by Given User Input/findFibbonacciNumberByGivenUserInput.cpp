#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Tell which Fibbonacci Number you want to see:  ";
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0; i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Fibbonacci Number at position "<<n<<" : "<<arr[n-1]; 
    return 0;
}
