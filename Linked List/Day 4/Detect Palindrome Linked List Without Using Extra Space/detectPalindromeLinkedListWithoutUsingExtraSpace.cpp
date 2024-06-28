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
void display(ListNode *head){
    ListNode *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

bool isPalindrome(ListNode* head) {
    //if there is only one node
    if(head->next==NULL){
        return 1;
    }
    //Counting Total nodes in list
    int count=0;
    ListNode *list1=head;
    while(list1){
        count++;
        list1=list1->next;
    }
    //dividing the list into two parts
    count/=2;
    list1=head;
    ListNode *prev=NULL, *curr=head;
    while(count--){
        prev=curr;
        curr=curr->next;
    }
    ListNode *list2=curr;
    prev->next=NULL;
    list1=head;
    //reversing the list2
    prev=NULL;
    ListNode *front=NULL;
    while(curr){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    list2=prev;
    //finding if two lists are equal or not
    while(list1){
        if(list1->val!=list2->val){
            return 0;
        }
        list1=list1->next;
        list2=list2->next;
    }
    return 1;
}

int main(){
    //int arr[]={1,3,3,2,1};
    //int arr[]={1,2,3,2,1};
    //int arr[]={1,2,3,3,2,1};
    int arr[]={1};
    int n=sizeof(arr)/sizeof(arr[0]);
    ListNode *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    
    display(head);
    cout<<endl<<isPalindrome(head);
    

    return 0;
}

/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example 1:

Input: head = [1,2,2,1]
Output: true

Example 2:

Input: head = [1,2]
Output: false
*/