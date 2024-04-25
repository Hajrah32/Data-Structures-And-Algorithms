#include<bits/stdc++.h>
using namespace std;
int largestElement(int arr[][4],int row, int col);
int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,19,10,11,12,13,14,15,16};
    cout<<"Largest Element: "<<largestElement(arr,4,4);
    return 0;
}
int largestElement(int arr[][4],int row, int col){
    int largest=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>largest)
                largest=arr[i][j];
        }
    }
    return largest;
}