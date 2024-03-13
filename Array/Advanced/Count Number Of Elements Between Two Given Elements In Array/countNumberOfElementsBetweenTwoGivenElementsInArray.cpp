#include<iostream>
using namespace std;
int getCount(int arr[], int n, int num1, int num2);
int main(){
    int arr[]={7,5,15,1,11,12,16,5,12,10};
    //{4, 2, 1, 10, 6};
    //{16,19,3,14,11,7,20,2,17,6,18,11,20,4};
    int num1,num2;
    cout<<"Enter starting Element: ";
    cin>>num1;
    cout<<"Enter ending Element: ";
    cin>>num2;
    
    
    cout<<getCount(arr,(sizeof(arr)/sizeof(arr[0])),num1,num2);
    return 0;
}
 int getCount(int arr[], int n, int num1, int num2){    
    int start,end,i=0;
    while(i<n){
        if(arr[i]==num1){
            start=i+1;
            i++;
            break;
        }
        else{
            i++;
        }
    }
    int j=n-1;
    while(j>=0){
        if(arr[j]==num2){
            end=j;
            j--;
            break;
        }
        else{
            j--;
        }
    }
    if(start-end>0)
        return 0;
    else
        return end-start;
}