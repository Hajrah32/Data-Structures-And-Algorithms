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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int count=0;
    ListNode *temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    count-=n;
    if(count==0){
        temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    ListNode *prev=NULL, *curr=head;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
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
    int k=6;
    ListNode *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    
    display(head);
    head=removeNthFromEnd(head,k);
    cout<<endl;
    display(head);

    return 0;
}

/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 
*/