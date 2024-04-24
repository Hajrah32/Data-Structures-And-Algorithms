#include<bits/stdc++.h>
using namespace std;
void searchElement(int arr[][4],int row, int col,int search);
int main() {
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int search;
    cout<<"Enter an element to search: ";
    cin>>search;
    searchElement(arr,4,4,search);
    return 0;
}
void searchElement(int arr[][4],int row, int col,int search){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==search){
                cout<<"Found";
                return;
            }
        }
    }
    cout<<"Not Found";
}