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
        head->next=temp;
    }
    node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}

void display(node* head){
    if(head!=NULL){
        cout<<head->data<<" ";
        node *temp=head->next;
        while(temp!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

node *sortedInsert(node* head, int data){
    node *temp = new node(data);
    node *curr=head;
    if (head == NULL) {
        head = new node(data);
        head->next = head;
        return head;
    }
    else if(curr->data > data){
        while(curr->next != head){
            curr=curr->next;
        }
        temp->next=head;
        curr->next=temp;
        head=temp;
        return head;
    }
    else{
        while(curr->next!=head && curr->next->data < data){
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
        return head;
    }


return head;

}
int main(){
    //int arr[]={1,2,4};
    int arr[]={-15, -9, -6, 5, 7, 14};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    node *head1=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    
    cout<<endl;
    display(head);

    
    head1=sortedInsert(head,16);
    cout<<endl;
    display(head1);
    return 0;
}

/*
Given two numbers, num1 and num2, represented by linked lists of size n and m respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Example 1:

Input:
n = 2
num1 = 45 (4->5->null)
m = 3
num2 = 345 (3->4->5->null)
Output: 
3->9->0->null  
Explanation: 
For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).
Example 2:

Input:
n = 4
num1 = 0063 (0->0->6->3->null)
m = 2
num2 = 07 (0->7->null)
Output: 
7->0->null
Explanation: 
For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(n+m)
Expected Auxiliary Space: O(max(n,m)) for the resultant list.

Constraints:
1 <= n, m <= 104
*/