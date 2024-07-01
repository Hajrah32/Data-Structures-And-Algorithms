#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next, *prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
node* insertAtEnd(node *tail, int data){
    
    node *curr=tail;
    node *temp=new node(data);
    temp->next=curr->next;
    curr->next->prev=temp;
    curr->next=temp;
    tail=temp;
    return tail;
}
void display(node* head){
    if(head!=NULL){
        cout<<head->data<<" ";
    }
    node *temp=head->next;
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=new node(arr[0]);
    head->next=head->prev=head;
    node *tail=head;
    
    for(int i=1; i<n; i++){
        tail=insertAtEnd(tail, arr[i]);
    }
    display(head);
    return 0;
}

