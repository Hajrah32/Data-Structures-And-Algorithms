#include<bits/stdc++.h>
using namespace std;
void spiralMatrix(int matrix[][5], int row, int col);
int main()
{
    int matrix[][5]={00,01,02,03,04,10,11,12,13,14,20,21,22,23,24,30,31,32,33,34,40,41,42,43,44}; 
    spiralMatrix(matrix,5,5);
    return 0;
    
} 
void spiralMatrix(int matrix[][5], int row, int col){
    int top=0, right=row-1, bottom=col-1, left=0;
    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++)
            cout<<matrix[top][i]<<" ";
        top++;
        cout<<endl;
        for(int i=top; i<=bottom; i++)
            cout<<matrix[i][right]<<" ";
        right--;
        cout<<endl;
        if(top<=bottom){
            for(int i=right; i>=left; i--)
                cout<<matrix[bottom][i]<<" ";
            bottom--;
            cout<<endl;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--)
                cout<<matrix[i][left]<<" ";
            left++;
            cout<<endl;
        }
    }
}