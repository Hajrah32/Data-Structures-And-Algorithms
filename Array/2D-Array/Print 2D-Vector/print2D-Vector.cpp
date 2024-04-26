#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter Rows and Columns: ";
    cin>>rows>>cols;
    vector<vector<int> >matrix(rows,vector<int>(cols));
    cout<<"Enter "<<rows*cols<<" elements: ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"Rows: "<<matrix.size();
    cout<<endl;
    cout<<"Columns: "<<matrix[0].size();
    cout<<"\nMatrix:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
} 