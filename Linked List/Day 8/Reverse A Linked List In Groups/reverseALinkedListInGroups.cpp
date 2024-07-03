#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node* insertAtEnd(node *head, int data){
    node *temp=new node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
    return head;
}

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node *reverseIt (node *head, int k){
    node *prev=NULL, *curr=head, *front=head->next;
    node *first=new node(0), *second;
    first->next=head;
    head=first;
    int i=1;
    while(curr!=NULL){
        second=first->next;
        prev=first;
        while(i<=k && curr!=NULL){  
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
            i++; 
        }
        first->next=prev;
        second->next=curr;
        first=second;
        i=1;
    }
    head=head->next;
    return head;
}
int main(){
    int arr[]={2,3,4,6,8,7,5,9,11,17};
    int n=sizeof(arr)/sizeof(arr[0]);
 
    node *head=NULL;
    node *head2=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }

    cout<<endl;
    display(head);

    cout<<endl;
    head2=reverseIt (head, 4);
    cout<<endl;
    display(head2);
    return 0;
}

/*
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.
Example 2:

Input:
LinkedList: 1->2->3->4->5
K = 3
Output: 3 2 1 5 4 
Explanation: 
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.
Your Task:
You don't need to read input or print anything. Your task is to complete the function reverse() which should reverse the linked list in group of size k and return the head of the modified linked list.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
*/