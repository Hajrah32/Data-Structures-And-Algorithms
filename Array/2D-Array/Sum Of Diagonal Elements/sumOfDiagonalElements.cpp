#include<bits/stdc++.h>
using namespace std;
int sumOfDiagonals(int arr[][4],int row, int col);
int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout<<sumOfDiagonals(arr,4,4);
    return 0;
}
int sumOfDiagonals(int arr[][4],int row, int col){
    int sum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if((i==j) || (i+j == row-1)){
                sum+=arr[i][j];
            }
        }  
    }
    return sum;
}