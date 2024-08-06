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
void preOrderTraversal(Node* root, long int &sum){
    if(root==NULL){
        return;
    }
    sum+=root->data;
    preOrderTraversal(root->left,sum);
    preOrderTraversal(root->right,sum);
}


long int sumBT(Node* root){
    long int sum=0;
    preOrderTraversal(root,sum);
    return sum;
}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<sumBT(root);

    
    
    return 0;
}
/*
Given a Binary Tree of size N, your task is to complete the function sumBt(), that should return the sum of all the nodes of the given binary tree.

Input:

First line of input contains the number of test cases T. For each test case, there will be two lines:

First line of each test case will be an integer N denoting the number of parent child relationships.

Second line of each test case will print the level order traversal of the tree in the form of N space separated triplets. The description of triplets is as follows:

Each triplet will contain three space-separated elements of the form (int, int char).

The first integer element will be the value of parent. 

The second integer will be the value of corresponding left or right child. In case the child is null, this value will be -1.

The third element of triplet which is a character can take any of the three values ‘L’, ‘R’ or ‘N’. L denotes that the children is a left child, R denotes that the children is a Right Child and N denotes that the child is NULL.
 

Please note that the relationships are printed only for internal nodes and not for leaf nodes.

Output:
The function should return the sum of all the nodes of the binary tree.

User Task:
As it is a functional problem. So, you don't need to worry about the input you just have to complete the function sumBT() that takes a node as a parameter and returns the sum of all the nodes.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
2
1 2 L 1 -1 N
6
1 2 L 1 3 R 2 -1 N 2 -1 N 3 3 L 3 -1 N
Output:
3
9

Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

*/