#include<bits/stdc++.h>
using namespace std;
void rotateBy90(int matrix[][4], int row, int col);
int main()
{
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    rotateBy90(matrix,4,4);   
    return 0;
    
} 
void rotateBy90(int matrix[][4], int row, int col){
    cout<<"Before Rotate: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    /*int top=0,bottom=row-1;
    while(top<bottom){
        int right=(row-1)-top, left=top;
        while(left<=(row-1)-top && right>=top+1){
            int topRight=matrix[top][right];
            int rightBottom=matrix[right][bottom];
            int bottomLeft=matrix[bottom][left];

            matrix[top][right]=matrix[left][top];
            matrix[right][bottom]=topRight;
            matrix[bottom][left]=rightBottom;
            matrix[left][top]=bottomLeft;
            left++; right--;
        }
        top++; bottom--;
    } */
    //by using transpose concept
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col/2; j++){
            swap(matrix[i][j],matrix[i][(col-1)-j]);
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