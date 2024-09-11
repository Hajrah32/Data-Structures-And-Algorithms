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

vector<int> postOrder(Node* root){
    vector<int>ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->left)
            st.push(temp->left);
        if(temp->right)
            st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    
    vector<int>ans=postOrder(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
/*
Given a binary tree. Find the postorder traversal of the tree without using recursion. Return a list containing the postorder traversal of the tree, calculated without using recursion.

Examples :

Input:
           1
         /   \
        2     3
      /  \
     4    5

Output: 4 5 2 3 1
Explanation: Postorder traversal (Left->Right->Root) of the tree is 4 5 2 3 1.
Input:
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
            10 6

Output: 10 7 1 6 10 6 5 8 
Explanation: Postorder traversal (Left->Right->Root) of the tree is 10 7 1 6 10 6 5 8 .
 
Expected time complexity: O(n)
Expected auxiliary space: O(n)
 
Constraints:
1 <= Number of nodes <= 105
1 <= Data of a node <= 105
*/