#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node* prev;
    node* next;
    node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};
node* insertAtEnd(node* tail, int val){
    node *temp=new node(val);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    return tail;
    
}
node* insertAtGivenPosition(node* head, int k, int val){
    node *temp=head;
    node *insert=new node(val);
    //if we want to insert at first position
    if(k==1){
        insert->next=head;
        head->prev=insert;
        return head=insert;
    }
    int i=1;
    while(i<k){
        temp=temp->next;
        i++;
    }
    //if we want to insert at last position
    if(temp->next==NULL){
        temp->next=insert;
        insert->prev=temp;
        return head;
    }
    //if we want to insert in the middle of list
    insert->prev=temp;
    insert->next=temp->next;
    temp->next=insert;
    insert->next->prev=insert;
    return head;
}
void display(node* head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL, *tail=NULL;
    for(int i=0; i<n; i++){
        if(head==NULL){
            head=new node(arr[i]);
            tail=head;
        }
        else{
            tail=insertAtEnd(tail,arr[i]);
        }
    }
    display(head);
    int k=4;
    head=insertAtGivenPosition(head,k,6);
    cout<<endl;
    display(head);
    return 0;
}

