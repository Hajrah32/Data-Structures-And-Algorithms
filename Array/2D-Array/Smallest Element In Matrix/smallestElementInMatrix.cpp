#include<bits/stdc++.h>
using namespace std;
int smallestElement(int arr[][4],int row, int col);
int main() {
    int arr[4][4]={1,2,-3,4,5,6,7,8,19,10,11,12,13,14,15,16};
    cout<<"Smallest Element: "<<smallestElement(arr,4,4);
    return 0;
}
int smallestElement(int arr[][4],int row, int col){
    int smallest=INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<smallest)
                smallest=arr[i][j];
        }
    }
    return smallest;
}