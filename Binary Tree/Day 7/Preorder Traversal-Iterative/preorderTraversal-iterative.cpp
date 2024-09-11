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

vector<int> preOrder(Node* root){
    vector<int>ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
            st.push(temp->left);
    }
    return ans;
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    
    vector<int>ans=preOrder(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
/*
Given a Binary tree. Find the preorder traversal of the tree without using recursion.


Example 1:

Input:
           1
         /   \
        2     3
      /  \
     4    5
Output: 1 2 4 5 3
Explanation:
Preorder traversal (Root->Left->Right) of 
the tree is 1 2 4 5 3.
Example 2

Input:
            8
          /   \
         1      5
          \    /  \
           7  10   6
            \  /
            10 6
Output: 8 1 7 10 5 10 6 6 
Explanation:
Preorder traversal (Root->Left->Right) 
of the tree is 8 1 7 10 5 10 6 6.
 

Your task:

You don't need to read input or print anything. Your task is to complete the function preOrder() which takes the root of the tree as input and returns a list containing the preorder traversal of the tree, calculated without using recursion.


Expected time complexity: O(N)
Expected auxiliary space: O(N)
*/