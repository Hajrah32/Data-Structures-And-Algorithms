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
bool isIdentical(Node *r1, Node *r2){
    if(r1==NULL && r2==NULL)
        return 1;
    if((!r1 && r2) || (r1 && !r2))
        return 0;
    if(r1->data!=r2->data)
        return 0;
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}

int main(){
    cout<<"Enter the root Node: ";
    Node* r1;
    r1=insertIntoBinaryTree();
    cout<<endl<<endl;
    cout<<"Enter the root Node: ";
    Node* r2;
    r2=insertIntoBinaryTree();
    cout<<isIdentical(r1,r2);
    
    
    return 0;
}
/*
Given two binary trees, the task is to find if both of them are identical or not.
Note: You need to return true or false, the printing is done by the driver code.

Example 1:

Input:
     1          1
   /   \      /   \
  2     3    2     3
Output: 
Yes
Explanation: 
There are two trees both having 3 nodes and 2 edges, both trees are identical having the root as 1, left child of 1 is 2 and right child of 1 is 3.
Example 2:

Input:
    1       1
  /  \     /  \
 2    3   3    2
Output: 
No
Explanation: There are two trees both having 3 nodes and 2 edges, but both trees are not identical.
Your task:
Since this is a functional problem you don't have to worry about input, you just have to complete the function isIdentical() that takes two roots as parameters and returns true or false. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 105
1 <=Data of a node <= 109
*/