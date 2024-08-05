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
void insertIntoBinaryTree(){
    queue<Node*>q;
    int x;
    cout<<"Enter the value of root: ";
    cin>>x;
    Node *root=new Node(x);
    q.push(root);
    int first,second;
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" : ";

        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
}
int main(){
    insertIntoBinaryTree();
    return 0;
}
