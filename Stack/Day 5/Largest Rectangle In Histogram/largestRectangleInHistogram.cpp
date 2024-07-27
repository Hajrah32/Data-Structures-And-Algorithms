#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights){
    stack<int> st;
    int n=heights.size();
    vector<int>NSR(n,n), NSL(n,-1);
    for(int i=0; i<n; i++){
        while(!st.empty() && heights[i]<heights[st.top()]){
            NSR[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && heights[i]<heights[st.top()]){
            NSL[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    int largest=INT_MIN;
    for(int i=0; i<n; i++){
        largest=max(largest, (heights[i]*(NSR[i]-NSL[i]-1)));
    }
    return largest;
}
int main(){
    vector<int>heights={2,3,4,2,6,5,4,5,3};
    cout<<largestRectangleArea(heights);
    return 0;
}
/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
Example 2:


Input: heights = [2,4]
Output: 4
 
time complexity: O(n)
space complexity: O(n)

Constraints:

1 <= heights.length <= 105
0 <= heights[i] <= 104
*/