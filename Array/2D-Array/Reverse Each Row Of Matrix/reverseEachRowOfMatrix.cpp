#include<bits/stdc++.h>
using namespace std;
void rowReverse(int arr[][4],int row, int col);
int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    rowReverse(arr,4,4);
    return 0;
}
void rowReverse(int arr[][4],int row, int col){
    
    for(int i=0; i<row; i++){
        int start=0, end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        } 
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}