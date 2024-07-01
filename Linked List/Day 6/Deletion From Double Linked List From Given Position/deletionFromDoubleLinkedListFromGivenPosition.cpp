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
node* deleteFromGivenPos(node *head, int pos){
    node *temp=head;
    //delete start of the node

    if(pos==1){
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        //if more than 1 node exists
        else{
            node *temp=head;
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
        return head;
    }
    while(--pos){
        temp=temp->next;
    }
    //delete end of the node

    if(temp->next==NULL){
        temp->prev->next=NULL;
        delete temp;
        
    }
    //delete middle of the node
    else{
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
    }
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
    //int arr[]={1};
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
    
    int pos=2;
    head=deleteFromGivenPos(head,pos);
    cout<<endl;
    display(head);
    return 0;
}

