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
node* insertAtStart(node* head, int val){
    node *temp=new node(val);
    if(head!=NULL){
        temp->next=head;
        head->prev=temp;
    }
    return head=temp;
    
}
void display(node* head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head,arr[i]);
    }
    display(head);
    return 0;
}

