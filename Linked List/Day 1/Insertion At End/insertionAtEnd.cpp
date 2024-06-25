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
void display(node *head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head,arr[i]);
    }
    
    display(head);
    return 0;
}