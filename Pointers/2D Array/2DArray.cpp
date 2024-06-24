#include<bits/stdc++.h>
using namespace std;
int main(){

    //2D Array
    int **arr=new int *[3];
    for(int i=0; i<3; i++){
        arr[i]=new int[3];
    }
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            arr[i][j]=(i+1)*(j+1);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;        
    }

    return 0;
}
