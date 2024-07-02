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
    
    if(head==NULL){
        head=new node(data);
    }
    else{
        node *tail=head;
        while(tail->next){
            tail=tail->next;
        }
        node *temp=new node(data);
        tail->next=temp;
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

node* segregate(node *head) {
    node *curr=head;
    int c0=0, c1=0, c2=0;
    while(curr){
        if(curr->data==0)
            c0++;
        else if(curr->data==1)
            c1++;
        else
            c2++;
        curr=curr->next;
    }
    curr=head;
    while(c0--){
        curr->data=0;
        curr=curr->next;
    }
    while(c1--){
        curr->data=1;
        curr=curr->next;
    }
    while(c2--){
        curr->data=2;
        curr=curr->next;
    }
    return head;
}
int main(){
    //int arr[]={1,2,2,1,2,0,2,2};
    int arr[]={1,2,2,1,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head,arr[i]);
    }
    display(head);
    head=segregate(head);
    cout<<endl;
    display(head);
    return 0;
}

/*

*/