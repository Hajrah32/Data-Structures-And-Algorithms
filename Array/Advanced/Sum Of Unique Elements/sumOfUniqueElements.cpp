#include<iostream>
using namespace std;
int sumOfUnique(int arr[], int n);
int main(){
    int arr[]={1,2,3,4,5}; 
    cout<<sumOfUnique(arr,(sizeof(arr)/sizeof(arr[0])));
    return 0;
}
 int sumOfUnique(int arr[], int n){    
    int sum=0;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            sum+=arr[i];
        }
    }
    return sum;
}