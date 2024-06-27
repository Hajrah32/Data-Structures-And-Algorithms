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
ListNode* middleNode(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    int count=0;
    while(fast!=NULL && fast->next!=NULL){
        count++;
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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
    int x=3;
    ListNode *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    display(head);
    cout<<endl;
    ListNode* middle=middleNode(head);
    cout<<middle->val<<endl;
    display(head);
    cout<<endl;
    return 0;
}

/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

Example 1:

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:

Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
*/