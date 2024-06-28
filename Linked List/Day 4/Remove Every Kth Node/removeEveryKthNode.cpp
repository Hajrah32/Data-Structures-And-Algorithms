#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int value){
        val=value;
        next=NULL;
    }
};
Node* insertAtStart(Node *head, int value){
    if(head==NULL)
        head=new Node(value);
    else{
        Node *temp=new Node(value);
        temp->next=head;
        head=temp;
    }
    return head;
}

Node* deleteK(Node *head,int K){
    if(K==1){
        return NULL;
    }
    int i=1;
    Node *prev=NULL, *curr=head;
    while(curr){
        if(i==K){
            
            prev->next=curr->next;
            
            delete curr;
            curr=prev->next;
            i=1;
        }
        else{
            prev=curr;
            curr=curr->next;
            i++;
        }
    }
    return head;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    Node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    
    display(head);
    head=deleteK(head,k);
    cout<<endl;
    display(head);

    return 0;
}

/*
Given a singly linked list having n nodes, your task is to remove every kth node from the linked list. 

Example 1:

Input:
n = 8
linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 
k = 2
Output: 
1 -> 3 -> 5 -> 7
Explanation: 
After removing every 2nd node of the linked list, the resultant linked list will be: 1 -> 3 -> 5 -> 7.
Example 2:

Input:
n = 10
linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 
k = 3
Output: 
1 -> 2 -> 4 -> 5 -> 7 -> 8 -> 10
Explanation: 
After removing every 3rd node of the linked list, the resultant linked list will be: 1 -> 2 -> 4 -> 5 -> 7 -> 8 -> 10.
Your Task:
The task is to complete the function deleteK() which takes head of linked list and integer k as input parameters and delete every kth node from the linked list and return its head.

Time Complexity :  O(n)
Auxiliary Space :  O(1)
 
*/