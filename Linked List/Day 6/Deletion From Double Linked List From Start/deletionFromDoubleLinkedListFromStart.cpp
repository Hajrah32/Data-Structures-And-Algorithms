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
node* deleteFromStart(node *head){
    if(head!=NULL){
        //if only one node exists
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
}
void display(node* head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    //int arr[]={1,2,3,4,5};
    int arr[]={1,2};
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
    head=deleteFromStart(head);
    cout<<endl;
    display(head);
    head=deleteFromStart(head);
    cout<<endl;
    display(head);
    return 0;
}

