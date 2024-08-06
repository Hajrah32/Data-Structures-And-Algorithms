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
vector <int> levelOrder(Node* root){
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* parent=q.front();
        q.pop();
        ans.push_back(parent->data);
        if(parent->left){
            q.push(parent->left);
        }
        if(parent->right){
            q.push(parent->right);
        }
    }
    return ans;
}


int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Level Order Traversal: "<<endl;
    Node *lOrder=root;
    vector<int>ans=levelOrder(lOrder);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    
    
    return 0;
}
/*
Given a root of a binary tree with n nodes, find its level order traversal.
Level order traversal of a tree is breadth-first traversal for the tree.

Example 1:

Input:
    1
  /   \ 
 3     2
Output:
1 3 2
Example 2:

Input:
        10
     /      \
    20       30
  /   \
 40   60
Output:
10 20 30 40 60
Your Task:
You don't have to take any input. Complete the function levelOrder() that takes the root node as input parameter and returns a list of integers containing the level order traversal of the given Binary Tree.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ n ≤ 105
0 ≤ Data of a node ≤ 109


*/