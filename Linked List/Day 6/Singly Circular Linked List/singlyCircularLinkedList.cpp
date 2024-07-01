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


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    display(head);
    return 0;
}

