#include<bits/stdc++.h>
using namespace std;
void addMatrices(int arr1[][4], int arr2[][4], int row, int col);
int main() {
    int arr1[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arr2[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    addMatrices(arr1,arr2,4,4);
    return 0;
}
void addMatrices(int arr1[][4], int arr2[][4], int row, int col){
    int sumArray[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sumArray[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<sumArray[i][j]<<" ";
        }
        cout<<endl;
    }
}