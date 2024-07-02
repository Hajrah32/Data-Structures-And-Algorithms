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
node* removeDuplicates(node *head){
    node* curr=head->next, *prev=head;
    if(head!=NULL){
        while(curr!=NULL){
            if(prev->data!=curr->data){
                prev=curr;
                curr=curr->next;
            }
            else{
                //node *temp=curr;
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
        }
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
    int arr[]={2,2,2,3,3,4,4};
    //int arr[]={2,2,2};
    //int arr[]={1};
    //int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head,arr[i]);
    }
    display(head);
    
    head=removeDuplicates(head);
    cout<<endl;
    display(head);
    return 0;
}

