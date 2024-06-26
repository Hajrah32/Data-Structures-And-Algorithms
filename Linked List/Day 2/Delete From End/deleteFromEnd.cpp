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
node* deleteFromEnd(node *head){
    if(head==NULL)
        cout<<"The List is Empty!\n";
    
    else{
        if(head->next==NULL){
            node *temp=head;
            head=NULL;
            delete temp;
        }
        else{
            node *curr=head;
            node *prev=NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }
    return head;
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
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    cout<<endl;
    head=deleteFromEnd(head);
    display(head);
    
    return 0;
}