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


void mirror(Node* node){
    if(node==NULL){
        return;
    }
    Node* temp=node->right;
    node->right=node->left;
    node->left=temp;
    mirror(node->left);
    mirror(node->right);
}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Preorder Traversal Before Mirror Image of Tree: "<<endl;
    Node *preOrderBefore=root;
    vector<int>ansBefore=preorder(preOrderBefore);
    for(int i=0; i<ansBefore.size(); i++){
        cout<<ansBefore[i]<<" ";
    }
    mirror(root);
    cout<<endl<<"Preorder Traversal After Mirror Image of Tree: "<<endl;
    Node *preOrderAfter=root;
    vector<int>ansAfter=preorder(preOrderAfter);
    for(int i=0; i<ansAfter.size(); i++){
        cout<<ansAfter[i]<<" ";
    }
    
    
    return 0;
}
/*
Given a Binary Tree, convert it into its mirror.
MirrorTree1            

Example 1:

Input:
      1
    /  \
   2    3
Output: 3 1 2
Explanation: The tree is
   1    (mirror)  1
 /  \    =>      /  \
2    3          3    2
The inorder of mirror is 3 1 2
Example 2:

Input:
      10
     /  \
    20   30
   /  \
  40  60
Output: 30 10 60 20 40
Explanation: The tree is
      10               10
    /    \  (mirror) /    \
   20    30    =>   30    20
  /  \                   /   \
 40  60                 60   40
The inroder traversal of mirror is
30 10 60 20 40.
Your Task:
Just complete the function mirror() that takes node as paramter  and convert it into its mirror. The printing is done by the driver code only.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 ≤ Number of nodes ≤ 105
1 ≤ Data of a node ≤ 105
*/