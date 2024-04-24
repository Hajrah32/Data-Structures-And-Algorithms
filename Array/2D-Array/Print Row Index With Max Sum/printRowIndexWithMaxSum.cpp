#include<bits/stdc++.h>
using namespace std;
int printMaxRowIndex(int arr[][4],int row, int col);
int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    cout<<printMaxRowIndex(arr,4,4);
    return 0;
}
int printMaxRowIndex(int arr[][4],int row, int col){
    int maxSum=INT_MIN,maxRow;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        
        if(maxSum<sum){
            maxRow=i;
            maxSum=max(maxSum,sum);
        }
    }
    return maxRow;
}