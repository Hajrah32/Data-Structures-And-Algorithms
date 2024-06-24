#include<bits/stdc++.h>
using namespace std;
int main(){
    //3D Array
    int ***arr= new int **[3];
    for(int i=0; i<3; i++){
        arr[i]=new int *[3];
        for(int j=0; j<3; j++){
            arr[i][j]=new int [3];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                arr[i][j][k]=(i+1)*(j+1)*(k+1);
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
