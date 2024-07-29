#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    for(int i=0; i<5; i++){
        q.push(i+1);
    }
    int s=q.size();
    int arr[s];
    int i=s-1;
    while(!q.empty()){
        arr[i]=q.front();
        q.pop();
        i--;
    }
    for(int i=0; i<s; i++){
        cout<<arr[i]<<" ";
    }
    i=0;
    while(i<s){
        q.push(arr[i]);
        i++;
    }
    return 0;
}
/*
Given a Queue Q containing N elements. The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue.

Example 1:

Input:
6
4 3 1 10 2 6
Output: 
6 2 10 1 3 4
Explanation: 
After reversing the given elements of the queue , the resultant queue will be 6 2 10 1 3 4.
Example 2:

Input:
4
4 3 2 1 
Output: 
1 2 3 4
Explanation: 
After reversing the given elements of the queue , the resultant queue will be 1 2 3 4.
Your Task: You need to complete the function rev that takes a queue as parameter and returns the reversed queue. The printing is done automatically by the driver code.

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)

Constraints:
1 ≤ N ≤ 105
1 ≤ elements of Queue ≤ 105
*/