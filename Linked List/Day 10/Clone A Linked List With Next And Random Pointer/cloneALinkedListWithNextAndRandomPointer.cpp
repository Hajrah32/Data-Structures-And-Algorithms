#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next, *arb;
    node(int val){
        data=val;
        next=NULL;
        arb=NULL;
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
void displayByNext(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void displayByArb(node *head){
    node *temp=head;
    while(temp){
        cout<<temp->arb->data<<" ";
        temp=temp->next;
    }
}
node *givingRandomPointer(node *head){
    node *temp=head;
    temp->arb=temp->next->next;
    temp->next->arb=temp;
    temp->next->next->arb=temp->next->next->next->next;
    temp->next->next->next->arb=temp->next->next;
    temp->next->next->next->next->arb=temp->next;
    return head;
}
node *copyList(node *head){
    node *headCopy=new node(head->data);
    node *currCopy=headCopy, *curr=head->next;
    
    while(curr!=NULL){
        node *temp=new node(curr->data);
        currCopy->next=temp;
        currCopy=currCopy->next;
        curr=curr->next;
    }
    node *ptr=headCopy, *ptr2=head;
    currCopy=headCopy;
    curr=head;
    while(currCopy){
        while(ptr2!=curr->arb){
            ptr=ptr->next;
            ptr2=ptr2->next;
        }
        currCopy->arb=ptr;
        
        ptr=headCopy;
        ptr2=head;
        currCopy=currCopy->next;
        curr=curr->next;
    }
    return headCopy;
}
int main(){
    //int arr[]={1,2,4};
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    node *head1=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    
    head=givingRandomPointer(head);   
    cout<<endl<<"Display of Original List By Next Pointer: "<<endl;
    displayByNext(head);
    cout<<endl<<"Display of Original List By Random Pointer: "<<endl;
    displayByArb(head); 
    head1=copyList(head);
    cout<<endl<<"Display of Copy List By Next Pointer: "<<endl;
    displayByNext(head1);
    cout<<endl<<"Display of Copy List By Random Pointer: "<<endl;
    displayByArb(head1);
    return 0;
}

/*
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b (arb is pointer to random node).

Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.arb --> Y, then for the corresponding two nodes x and y in the copied list, x.arb --> y.

Return the head of the copied linked list.

ArbitLinked List1

Note :- The diagram isn't part of any example, it just depicts an example of how the linked list may look like.

Example 1:

Input:
N = 4, M = 2
value = {1,2,3,4}
pairs = {{1,2},{2,4}}
Output: 1
Explanation: In this test case, there
are 4 nodes in linked list.  Among these
4 nodes,  2 nodes have arbitrary pointer
set, rest two nodes have arbitrary pointer
as NULL. Second line tells us the value
of four nodes. The third line gives the
information about arbitrary pointers.
The first node arbitrary pointer is set to
node 2.  The second node arbitrary pointer
is set to node 4.
Example 2:

Input:
N = 4, M = 2
value[] = {1,3,5,9}
pairs[] = {{1,1},{3,4}}
Output: 1
Explanation: In the given testcase ,
applying the method as stated in the
above example, the output will be 1.

Your Task:
The task is to complete the function copyList() which takes one argument the head of the linked list to be cloned and should return the head of the cloned linked list.

NOTE : 
1. If there is any node whose arbitrary pointer is not given then it's by default NULL. 
2. Your solution return an output 1 if your clone linked list is correct, else it returns 0.
3. Don't make any changes to the original linked list.

Time Complexity : O(n^2)
Auxilliary Space : O(1)
*/