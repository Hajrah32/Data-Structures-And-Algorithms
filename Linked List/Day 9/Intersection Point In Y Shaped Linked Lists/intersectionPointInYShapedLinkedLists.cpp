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
node* addCommonNode(node *head){
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    return curr;
}
int intersectPoint(node* head1, node* head2){
    int s1=0,s2=0;
    node *list1=head1, *list2=head2;
    while(list1){
        s1++;
        list1=list1->next;
    }
    while(list2){
        s2++;
        list2=list2->next;
    }
    list1=head1;
    list2=head2;
    while(s1>s2){
        s1--;
        list1=list1->next;
    }
    while(s2>s1){
        s2--;
        list2=list2->next;
    }

    while(list1!=list2){
        list1=list1->next;
        list2=list2->next;
    }
    if(list1)
        return list1->data;
    
    else
        return -1;
    
}
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={3,6,9,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head1=NULL;
    node *head2=NULL;
    for(int i=0; i<n; i++){
        head1=insertAtEnd(head1, arr[i]);
    }
    node *commonNode=addCommonNode(head1);
    head1=insertAtEnd(head1, 30);
    head1=insertAtEnd(head1, 40);
    head1=insertAtEnd(head1, 50);
    head1=insertAtEnd(head1, 60);
    head1=insertAtEnd(head1, 70);
    head2=insertAtEnd(head2, 80);
    cout<<intersectPoint(head1,head2);
    head2->next=commonNode;
    
    cout<<endl;
    display(head1);

    cout<<endl;
    display(head2);
    cout<<endl<<endl<<intersectPoint(head1,head2);
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