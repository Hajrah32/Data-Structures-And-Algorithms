#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    vector<int>ans;
    deque<int>dq;
    for(int i=0; i<k-1; i++){
        if(dq.empty()){
            dq.push_front(i);
        }
        else{
            while(!dq.empty() && nums[i]>nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
    }
    for(int i=k-1; i<nums.size(); i++){
        while(!dq.empty() && nums[i]>nums[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(dq.front()<=i-k){
            dq.pop_front();
        }
        ans.push_back(nums[dq.front()]);
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