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

bool isPalindrome(ListNode* head) {
    ListNode *temp=head;
    vector<int>vect;
    while(temp){
        vect.push_back(temp->val);
        temp=temp->next;
    }
    int start=0, end=vect.size()-1;
    while(start<=end){
        if(vect[start]!=vect[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void display(ListNode *head){
    ListNode *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,3,3,2,1};
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