#include<bits/stdc++.h>
using namespace std;
void rotateBy90AntiClockwise(int matrix[][4], int row, int col);
int main()
{
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    rotateBy90AntiClockwise(matrix,4,4);   
    return 0;
    
} 
void rotateBy90AntiClockwise(int matrix[][4], int row, int col){
    cout<<"Before Rotate: "<<endl;
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
    for(int i=0; i<col; i++){
        for(int j=0; j<row/2; j++){
            swap(matrix[j][i],matrix[col-1-j][i]);
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