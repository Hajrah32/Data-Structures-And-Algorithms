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

bool isCousins(Node *root, int a, int b){
    int l1=-1,l2=-1,level=0;
    queue<Node*> q;
    Node *parent1=NULL, *parent2=NULL;
    q.push(root);
     while(!q.empty()){
        int n = q.size();
        
        while(n--){
            Node *temp = q.front();
            q.pop();
            
            if(temp->left != NULL) {
                if(temp->left->data == a){
                    l1 = level;
                    parent1 = temp;
                }
                if(temp->left->data == b){
                    l2 = level;
                    parent2 = temp;
                }
                q.push(temp->left);
            }
            
            if(temp->right != NULL) {
                if(temp->right->data == a){
                    l1 = level;
                    parent1 = temp;
                }
                if(temp->right->data == b){
                    l2 = level;
                    parent2 = temp;
                }
                q.push(temp->right);
            }
        }
        if(l1 != -1 && l2 != -1)
            break;
        level++;
    }
    if(l1 == l2 && parent1 != parent2)
        return true;
    return false;
}
int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root=insertIntoBinaryTree();
    cout<<isCousins(root,2,4);
    return 0;
}
/*
Given a binary tree (having distinct node values)root and two node values. Check whether or not the two nodes with values a and b are cousins.
Note: Two nodes of a binary tree are cousins if they have the same depth with different parents.

Example 1:

Input:
      1
    /   \
   2     3
a = 2, b = 3
Output: false
Explanation: Here, nodes 2 and 3 areat the same level but have sameparent nodes.
Example 2:

Input:
       1
     /   \ 
    2     3
   /       \
  5         4 
a = 5, b = 4
Output: True
Explanation: Here, nodes 5 and 4 areat the same level and have differentparent nodes. Hence, they both are cousins 
Your Task:
You don't need to read input or print anything. Your task is to complete the function isCousins() that takes the tree's root node, and two integers 'a' and 'b' as inputs. It returns true if the nodes with given values 'a' and 'b' are Cousins of each other and returns false otherwise. 

Expected Time Complexity: O(Number of Nodes).
Expected Auxiliary Space: O(Number of Nodes).

Constraints:
1 <= number of nodes <= 105
1 <= a, b <= 105
*/