#include<bits/stdc++.h>
using namespace std;
void possiblePaths(int n,int m, vector<vector<int>> &grid, int r, int c, vector<int>&temp,vector<vector<int>>&ans);
int main(){
    vector<vector<int>> grid={{1,2,3},{4,5,6}};
    //vector<vector<int>> grid={{1,2},{3,4}};
    int n=grid.size();
    int m=grid[0].size();
    
    vector<int>temp;
    vector<vector<int>>ans;
    possiblePaths(n-1,m-1,grid,0,0,temp,ans);
    cout<<endl<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
void possiblePaths(int n,int m, vector<vector<int>> &grid, int r, int c,vector<int>&temp,vector<vector<int>>&ans){
    if(r==n && c==m+1){
        ans.push_back(temp);
        return;
    }
    if(r>n || c>m)
        return;

    temp.push_back(grid[r][c]);
    possiblePaths(n,m,grid,r+1,c,temp,ans);
    temp.pop_back();

    temp.push_back(grid[r][c]);
    possiblePaths(n,m,grid,r,c+1,temp,ans);
    temp.pop_back();
}
/*
Given a N x M grid. Find All possible paths from top left to bottom right.
From each cell you can either move only to right or down.
Example 1:
Input: 1 2 3
       4 5 6
Output: 1 4 5 6
        1 2 5 6 
        1 2 3 6
Explanation: We can see that there are 3 
paths from the cell (0,0) to (1,2).

Expected Time Complexity: O(2^N*M)
Expected Auxiliary Space: O(N)

*/