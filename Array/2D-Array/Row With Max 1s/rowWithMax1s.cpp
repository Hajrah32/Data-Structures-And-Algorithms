#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr, int n, int m);
int main()
{   
    vector<vector<int> > arr={{0, 1, 1, 1},{0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};
    //vector<vector<int> > arr={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
    //vector<vector<int> > arr={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 1},{0, 0, 0, 0}};
    //vector<vector<int> > arr={{1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 1}};
    //vector<vector<int> > arr={{0,0,0, 1,0, 0}, {0, 0, 0, 1, 0, 1}};

    int n=arr.size();
    int m=arr[0].size();
    cout<<rowWithMax1s(arr,n,m);
    return 0;
    
} 
int rowWithMax1s(vector<vector<int> > arr, int n, int m){
    int i=0, j=m-1;
    int row=-1;
    while(i<n && j>=0){
        if(arr[i][j]==1){
             row=i;
             j--;
        }           
        else
            i++;
    }
    return row;
}