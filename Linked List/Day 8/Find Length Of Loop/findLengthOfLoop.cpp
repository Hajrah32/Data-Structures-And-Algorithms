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
node* addLoop(node *head){
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    return curr;
}

int countNodesinLoop(node *head){
    node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }    
    if(fast==NULL || fast->next==NULL){
        return 0;
    }
    int count=1;
    slow=slow->next;
    while(slow!=fast){
        count++;
        slow=slow->next;
    }
    return count;
}
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    //display(head);
    node *loopBegin=addLoop(head);
    int arr2[]={6,7,8,9,10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0; i<n2; i++){
        head=insertAtEnd(head, arr2[i]);
    }
    cout<<endl;
    display(head);
    cout<<endl<<countNodesinLoop(head);
    node *loopEnd=addLoop(head);
    loopEnd->next=loopBegin;
    cout<<endl<<countNodesinLoop(head);
    return 0;
}

/*
Given a linked list of size N. The task is to complete the function countNodesinLoop() that checks whether a given Linked List contains a loop or not and if the loop is present then return the count of nodes in a loop or else return 0. C is the position of the node to which the last node is connected. If it is 0 then no loop.



Example 1:

Input:
N = 10
value[]={25,14,19,33,10,21,39,90,58,45}
C = 4
Output: 7
Explanation: The loop is 45->33. So length of loop is 33->10->21->39-> 90->58->45 = 7. The number 33 is connected to the last node to form the loop because according to the input the 4th node from the beginning(1 basedindex) will be connected to the last node for the loop.
Example 2:

Input:
N = 2
value[] = {1,0}
C = 1
Output: 2
Explanation: The length of the loop
is 2.
Your Task:
The task is to complete the function countNodesinLoop() which contains the only argument as reference to head of linked list and return the length of the loop ( 0 if there is no loop).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/