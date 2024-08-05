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
void inOrderTraversal(Node* root, vector<int>&ans){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left,ans);
    ans.push_back(root->data);
    inOrderTraversal(root->right,ans);
}
vector <int> inorder(Node* root){
    vector<int>ans;
    inOrderTraversal(root, ans);
    return ans;
}


int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Inorder Traversal: "<<endl;
    Node *inOrder=root;
    vector<int>ans=inorder(inOrder);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    
    
    return 0;
}
/*
Given a Binary Tree, find the In-Order Traversal of it.

Example 1:

Input:
       1
     /  \
    3    2
Output: 3 1 2

Example 2:

Input:
        10
     /      \ 
    20       30 
  /    \    /
 40    60  50
Output: 40 20 60 10 50 30

Your Task:
You don't need to read input or print anything. Your task is to complete the function inOrder() that takes root node of the tree as input and returns a list containing the In-Order Traversal of the given Binary Tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 105
*/