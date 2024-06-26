#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};
node* insertAtStart(node *head, int value){
    if(head==NULL)
        head=new node(value);
    else{
        node *temp=new node(value);
        temp->next=head;
        head=temp;
    }
    return head;
}
void deleteNode(node *del_node){
    node* temp=del_node->next;
    del_node->data=temp->data;
    del_node->next=temp->next;
    delete temp;
}
node* searchANode(node *head,int x){
    node* temp=head;
    int i=1;
    while(i<x){
        temp=temp->next;
        i++;
    }
    return temp;
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=3;
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    display(head);
    cout<<endl;
    node* search=searchANode(head,x);
    deleteNode(search);
    display(head);
    cout<<endl;
    return 0;
}