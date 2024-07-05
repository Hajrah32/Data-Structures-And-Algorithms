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
node* addLoop(node *head){
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    return curr;
}
void removeLoop(node* head){
    node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }    
    if(fast==NULL || fast->next==NULL){
        return;
    }
    slow=head;
    while(slow!=fast){
        fast=fast->next;
        slow=slow->next;
    }
    while(slow!=fast->next){
        fast=fast->next;
    }
    fast->next=NULL;
}
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    //display(head);
    node *loopBegin=addLoop(head);
    int arr2[]={6,7,8,9,10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0; i<n2; i++){
        head=insertAtEnd(head, arr2[i]);
    }
    cout<<endl;
    display(head);
    removeLoop(head);
    cout<<endl;
    display(head);
    node *loopEnd=addLoop(head);
    loopEnd->next=loopBegin;
    removeLoop(head);
    cout<<endl;
    display(head);
    return 0;
}

/*
Given head of a linked list that may contain a loop.  A loops means that the last node of the linked list is connected back to a node in the same list.  So if next of the last node is null. then there is no loop.  Remove loop from the linked list, if it is present (we mainly need to make next of the last node as null). Otherwise keep the linked list as it is.

The following is internal representation of every test case (three inputs).
n : Size of the linked list
value[] :  An array of values that represents values of nodes.
pos (1 based index) :  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

The generated output will be 1 if your submitted code is correct.

Examples:

Input: n = 3, value[] = {1,3,4}, pos = 2
Output: 1
Explanation: The linked list looks like

A loop is present. If you remove it successfully, the answer will be 1. 
Input: n = 4, value[] = {1,8,3,4}, pos = 0
Output: 1
Explanation: 

The Linked list does not contains any loop. 
Input: n = 4, value[] = {1,2,3,4}, pos = 1
Output: 1
Explanation: The linked list looks like 

A loop is present. If you remove it successfully, the answer will be 1. 
Expected time complexity: O(n)
Expected auxiliary space: O(1)
*/