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
ListNode* reverseList(ListNode* head){
    vector<int>vect;
    ListNode *temp=head;
    while(temp){
        vect.push_back(temp->val);
        temp=temp->next;
    }
    temp=head;
    int i=vect.size()-1;
    while(temp){
        temp->val=vect[i];
        i--;
        temp=temp->next;
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
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    ListNode *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    display(head);
    cout<<endl;
    head=reverseList(head);
    display(head);
    cout<<endl;
    return 0;
}

/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:

Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
*/