#include<bits/stdc++.h>
using namespace std;
void rotateBy180(int matrix[][4], int row, int col);
int main()
{
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    rotateBy180(matrix,4,4);   
    return 0;
    
} 
void rotateBy180(int matrix[][4], int row, int col){
    cout<<"Before Rotate: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
   
    for(int i=0; i<row/2; i++){
        for(int j=0; j<col; j++){
            swap(matrix[i][j],matrix[row-1-i][col-1-j]);
        }
    }
    cout<<"After Rotate: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}