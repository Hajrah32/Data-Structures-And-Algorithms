#include<bits/stdc++.h>
using namespace std;
void transposeMatrix(int matrix[][4], int row, int col);
int main()
{
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    transposeMatrix(matrix,4,4);   
    return 0;
    
} 
void transposeMatrix(int matrix[][4], int row, int col){
    cout<<"Before Transpose: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    cout<<"After Transpose: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}