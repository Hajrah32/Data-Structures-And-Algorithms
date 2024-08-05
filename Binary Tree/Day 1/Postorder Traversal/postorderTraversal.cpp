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
void postOrderTraversal(Node* root, vector<int>&ans){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left,ans);
    postOrderTraversal(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postorder(Node* root){
    vector<int>ans;
    postOrderTraversal(root, ans);
    return ans;
}


int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Postorder Traversal: "<<endl;
    Node *postOrder=root;
    vector<int>ans=postorder(postOrder);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    
    
    return 0;
}
/*
Given a binary tree, find the Postorder Traversal of it.
For Example, the postorder traversal of the following tree is:
5 10 39 1

        1
     /     \
   10     39
  /
5


Example 1:

Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
Example 2:

Input:
          11
         /
       15
      /
     7
Output: 7 15 11

Your Task:
You don't need to read input or print anything. Your task is to complete the function postOrder() that takes root node as input and returns an array containing the postorder traversal of the given Binary Tree.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


Constraints:
1 <= Number of nodes <= 105
0 <= Data of a node <= 106
*/