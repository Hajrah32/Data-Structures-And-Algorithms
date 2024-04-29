#include<bits/stdc++.h>
using namespace std;
void rotateByKTimes(int matrix[][4], int row, int col, int k);
int main()
{   //k=1 =90deg, k=2=90*2, k=3=90*3...
    int k;
    cout<<"How much times you want to rotate the matrix: ";
    cin>>k;
    int matrix[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
    rotateByKTimes(matrix,4,4,k);   
    return 0;
    
} 
void rotateByKTimes(int matrix[][4], int row, int col, int k){
    cout<<"Before Rotate: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    k=k%4;
    int count=0;
    for(int rotate=0; rotate<k; rotate++){
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
        count++;
    }
    cout<<count<<"\n";
    cout<<"After Rotate: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}