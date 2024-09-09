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
int getSum(Node* root){
    if(!root)
        return 0;
    int LV=getSum(root->left);
    int RV=getSum(root->right);
    if(!root->left && !root->right)
        return root->data;
    if(root->data==LV+RV)
        return root->data+LV+RV;
    else 
        return 0;
}
bool isSumTree(Node* root) {
    int get= getSum(root);
    if(get)
        return 1;
    else return 0;
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    
    cout<<isSumTree(root);
    
    //6 2 4 N 5 8 3
    
    return 0;
}
/*
Given a Binary Tree. Check for the Sum Tree for every node except the leaf node. Return true if it is a Sum Tree otherwise, return false.

A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

Examples :

Input:
    3
  /   \    
 1     2
Output: true
Explanation: The sum of left subtree and right subtree is 1 + 2 = 3, which is the value of the root node. Therefore,the given binary tree is a sum tree.
Input:
          10
        /    \
      20      30
    /   \ 
   10    10
Output: false
Explanation: The given tree is not a sum tree. For the root node, sum of elements in left subtree is 40 and sum of elements in right subtree is 30. Root element = 10 which is not equal to 30+40.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(Height of the Tree)

Constraints:
2 ≤ number of nodes ≤ 105
1 ≤ node value ≤ 105
*/