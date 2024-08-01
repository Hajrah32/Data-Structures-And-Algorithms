#include<bits/stdc++.h>
using namespace std;
int findMaxi(vector<int>nums,queue<int> q){
    int maxi=q.front();
    q.pop();
    while(!q.empty()){
        if(nums[q.front()]>=nums[maxi]){
            maxi=q.front();
        }
        q.pop();
    }
    return maxi;
}
vector<int> maxSlidingWindow(vector<int>& nums, int k){
    vector<int>ans;
    queue<int>q;
    q.push(0);
    int maxi=0;
    if(nums.size()==1){
        ans.push_back(nums[maxi]);
        return ans;
    }
    if(k==1){
        return nums;
    }
    for(int i=1; i<k-1; i++){
        q.push(i);
        if(nums[i]>=nums[maxi])
            maxi=i;
    }
    for(int i=k-1; i<nums.size(); i++){
        q.push(i);
        if(maxi<q.front()){
            maxi=findMaxi(nums,q);
        }
        else if(nums[i]>=nums[maxi]){
            
            maxi=i; 
        }
        q.pop();
        ans.push_back(nums[maxi]);
    }
    return ans;
}
int main(){
    
vector<int> nums = {1,-1};
    int k = 1;
    //vector<int> nums = {1,3,-1,-3,5,3,6,7};
    //int k = 3;
    //vector<int> nums = {1};
    //int k = 1;
    //vector<int>nums={4,3,7,5,2,3,1,2,8,7};
    //int k=4;
    vector<int>ans=maxSlidingWindow(nums,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

 

Example 1:

Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
1 <= k <= nums.length
*/