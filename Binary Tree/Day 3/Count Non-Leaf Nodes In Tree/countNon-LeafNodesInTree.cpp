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

int countNonLeafNodes(Node* root){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 0;
    return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<countNonLeafNodes(root);
    return 0;
}
