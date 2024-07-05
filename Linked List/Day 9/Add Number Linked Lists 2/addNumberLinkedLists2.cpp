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

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* addTwoLists(node* num1, node* num2)
    {
        //reverse both lists
        node *prev=NULL, *curr1=num1, *curr2=num2, *future=num1->next;
        while(curr1){
            future=curr1->next;
            curr1->next=prev;
            prev=curr1;
            curr1=future;
        }
        num1=prev;
    
        prev=NULL;
        future=num2->next;
        while(curr2){
            future=curr2->next;
            curr2->next=prev;
            prev=curr2;
            curr2=future;
        }
        num2=prev;
        
        curr1=num1;
        curr2=num2;
        // add elements of both lists and insert into new list
        node *head=NULL;
        int carry=0;
        while(curr1 && curr2){
            int sum=curr1->data + curr2->data +carry;
            int rem=(sum%10);
            
            if(head==NULL){
                head=new node(rem);
            }
            else{
                node *temp=new node(rem);
                temp->next=head;
                head=temp;
            }
            carry=sum/10;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        while(curr1){
            int sum=curr1->data +carry;
            int rem=sum % 10;
            node *temp=new node(rem);
            temp->next=head;
            head=temp;
            carry=sum / 10;
            curr1=curr1->next;
        }
    
    
        while(curr2){
            int sum=curr2->data +carry;
            int rem=sum % 10;
            node *temp=new node(rem);
            temp->next=head;
            head=temp;
            carry=sum / 10;
            curr2=curr2->next;
        }
        if(carry!=0){
            node *temp=new node(carry);
            temp->next=head;
            head=temp;
        }
        node *curr=head;
        while(curr->next){
            if(curr->data==0){
                head=curr->next;
            }
            else{
                break;
            }
            curr=curr->next;
        }
        return head;
}
int main(){
    int arr1[]={9,7,6,8,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={6,4,3,8};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    node *head1=NULL;
    node *head2=NULL;
    node *head3=NULL;
    for(int i=0; i<n1; i++){
        head1=insertAtEnd(head1, arr1[i]);
    }
    for(int i=0; i<n2; i++){
        head2=insertAtEnd(head2, arr2[i]);
    }
    
    cout<<endl;
    display(head1);

    cout<<endl;
    display(head2);
    head3=addTwoLists(head1,head2);
    cout<<endl;
    display(head3);
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