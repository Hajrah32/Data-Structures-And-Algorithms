#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* insertIntoBinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp=new Node(x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=insertIntoBinaryTree();
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=insertIntoBinaryTree();
    return temp;
    
}
void findLeftmostAndRightmost(Node *root,int pos,int &l,int &r){
    if(!root)
        return;
    l=min(l,pos);
    r=max(r,pos);
    findLeftmostAndRightmost(root->left,pos-1,l,r);
    findLeftmostAndRightmost(root->right,pos+1,l,r);
}
void Tview(Node* root,vector<int>&ans,vector<int>&level,int pos,int lev){
    if(!root)
        return;
    if(level[pos]>lev){
        ans[pos]=root->data;
        level[pos]=lev;
    }
    Tview(root->left,ans,level,pos-1,lev+1);
    Tview(root->right,ans,level,pos+1,lev+1);
}
vector<int> topView(Node *root){
    int l=0,r=0;
    findLeftmostAndRightmost(root,0,l,r);
    vector<int>ans(r-l+1);
    vector<int>level(r-l+1,INT_MAX);
    Tview(root,ans,level,-1*l,0);
    
    return ans;
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    
    vector<int>ans=topView(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
/*
Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree

       1
    /     \
   2       3
  /  \    /   \
4    5  6   7

Top view will be: 4 2 1 3 7
Note: Return nodes from leftmost node to rightmost node. Also if 2 nodes are outside the shadow of the tree and are at same position then consider the left ones only(i.e. leftmost). 
For ex - 1 2 3 N 4 5 N 6 N 7 N 8 N 9 N N N N N will give 8 2 1 3 as answer. Here 8 and 9 are on the same position but 9 will get shadowed.

Example 1:

Input:
      1
   /    \
  2      3
Output: 2 1 3
Example 2:

Input:
       10
    /      \
  20        30
 /   \    /    \
40   60  90    100
Output: 40 20 10 30 100
Your Task:
Since this is a function problem. You don't have to take input. Just complete the function topView() that takes root node as parameter and returns a list of nodes visible from the top view from left to right.

Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105
1 ≤ Node Data ≤ 105
*/