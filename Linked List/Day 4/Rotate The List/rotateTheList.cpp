#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int value){
        val=value;
        next=NULL;
    }
};
ListNode* insertAtStart(ListNode *head, int value){
    if(head==NULL)
        head=new ListNode(value);
    else{
        ListNode *temp=new ListNode(value);
        temp->next=head;
        head=temp;
    }
    return head;
}

ListNode* rotateRight(ListNode* head, int k){
    if(head!=NULL){
    ListNode *temp=head;
    int count=0;
    while(temp){
        temp=temp->next;
        count++;
    }
    
    ListNode *prev=NULL, *curr=head;
    count=(count-(k%count))%count;
    if(count==0){
        return head;
    }
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    ListNode *tail=curr;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=head;
    head=curr;
    }
    return head;
}
void display(ListNode *head){
    ListNode *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    ListNode *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    
    display(head);
    head=rotateRight(head,k);
    cout<<endl;
    display(head);
    
    return 0;
}

/*
Given the head of a linked list, rotate the list to the right by k places.

Example 1:

Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:

Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/