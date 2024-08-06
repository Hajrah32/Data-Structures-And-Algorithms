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

int getSize(Node* node){
    if(node==NULL)
        return 0;
    
    return 1+ getSize(node->left)+getSize(node->right);

}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<getSize(root);
    return 0;
}
/*
Given a binary tree of size n, you have to count the number of nodes in it. For example, the count of nodes in the tree below is 4.

        1
     /      \
   10      39
  /
5

Example 1:
Input:
1 2 3
Output:
3
Explanation:
Given Tree is :
                              1
                             /  \
                            2   3
There are 3 nodes in the tree.
Example 2:
Input:
10 5 9 N 1 3 6 
Output:
6
Explanation:
Given Tree is :
                              10
                             /  \
                           5     9
                            \    / \
                             1 3   6
There are 6 nodes in the tree.
User Task:
You don't need to read input or print anything. Your task is to complete the function getSize() which takes the tree head node and returns an integer representing the number of nodes in the tree.

Expected Time Complexity: O(n)
Expected Auxillary Space: O(h), where h is the height of the binary tree

Constraints:
1 <= n <= 105
1 <= values of nodes <= 106
*/