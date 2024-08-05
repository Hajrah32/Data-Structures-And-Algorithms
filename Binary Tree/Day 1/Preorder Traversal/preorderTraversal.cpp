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
void preOrderTraversal(Node* root, vector<int>&ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    preOrderTraversal(root->left,ans);
    preOrderTraversal(root->right,ans);
}
vector <int> preorder(Node* root){
    vector<int>ans;
    preOrderTraversal(root, ans);
    return ans;
}


int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Preorder Traversal: "<<endl;
    Node *preOrder=root;
    vector<int>ans=preorder(preOrder);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    
    
    return 0;
}
/*
Given a binary tree, find its preorder traversal.

Example 1:

Input:
        1      
      /          
    4    
  /    \   
4       2
Output: 1 4 4 2 
Example 2:

Input:
       6
     /   \
    3     2
     \   / 
      1 2
Output: 6 3 1 2 2 

Your Task:
You just have to complete the function preorder() which takes the root node of the tree as input and returns an array containing the preorder traversal of the tree.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= Number of nodes <= 104
0 <= Data of a node <= 105
*/