#include<bits/stdc++.h>
using namespace std;
void waveForm(int matrix[][4], int row, int col);
int main()
{
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    waveForm(matrix,4,4);
    return 0;
    
} 
void waveForm(int matrix[][4], int row, int col){
    cout<<"Before: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"After: "<<endl;
    for(int i=0; i<col; i++){
        if(i%2==0){
            for(int j=0; j<row; j++){
                cout<<matrix[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1; j>=0; j--){
                cout<<matrix[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}