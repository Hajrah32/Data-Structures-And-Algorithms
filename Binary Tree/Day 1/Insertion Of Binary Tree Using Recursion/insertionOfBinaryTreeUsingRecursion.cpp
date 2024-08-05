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
void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<endl<<"Preorder Traversal: "<<endl;
    Node *preOrder=root;
    preOrderTraversal(preOrder);
    

    cout<<endl<<"Inorder Traversal: "<<endl;
    Node *inOrder=root;
    inOrderTraversal(inOrder);
    

    cout<<endl<<"Postorder Traversal: "<<endl;
    Node *postOrder=root;
    postOrderTraversal(postOrder);
    
    return 0;
}
