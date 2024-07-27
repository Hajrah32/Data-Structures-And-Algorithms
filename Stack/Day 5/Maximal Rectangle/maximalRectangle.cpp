#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights){
    stack<int> st;
    int n=heights.size();
    int ans=0;
    for(int i=0; i<n; i++){
        while(!st.empty() && heights[i]<heights[st.top()]){
            int index=st.top();
            st.pop();
            if(!st.empty()){
                ans=max(ans,heights[index]*(i-st.top()-1));
            }
            else{
                ans=max(ans,heights[index]*i);
            }
        }
        st.push(i);
    }

    while(!st.empty()){
        int index=st.top();
        st.pop();
        if(!st.empty()){
            ans=max(ans,heights[index]*(n-st.top()-1));
        }
        else{
            ans=max(ans,heights[index]*n);
        }
    }
    return ans;
}
int maximalRectangle(vector<vector<char>>& matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    int ans=0;
    vector<int>heights(col,0);
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]=='1'){
                heights[j]+=1;
            }
            else{
                heights[j]=0;
            }
        }
        ans=max(ans,largestRectangleArea(heights));

    }
    return ans;
}
int main(){
    vector<vector<char>>matrix = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<maximalRectangle(matrix);
    return 0;
}
/*
Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

 

Example 1:


Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
Example 2:

Input: matrix = [["0"]]
Output: 0
Example 3:

Input: matrix = [["1"]]
Output: 1
 

Constraints:

rows == matrix.length
cols == matrix[i].length
1 <= row, cols <= 200
matrix[i][j] is '0' or '1'.
*/