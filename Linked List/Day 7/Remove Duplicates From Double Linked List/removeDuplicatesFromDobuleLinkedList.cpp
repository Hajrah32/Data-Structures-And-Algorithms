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
node* removeDuplicates(node *head){
    if(head!=NULL){
        node *temp=head->next;
        int duplicate=head->data;
        while(temp){
            if(temp->data != duplicate){
                duplicate=temp->data;
                temp=temp->next;
            }
            else{
                node *temp2=temp;
                temp2->prev->next=temp->next;
                if(temp->next!=NULL){
                    temp2->next->prev=temp->prev;
                }
                temp=temp->next;           
                delete temp2;
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
    //int arr[]={2,2,2,3,3,4,4};
    //int arr[]={2,2,2};
    int arr[]={1};
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
    
    head=removeDuplicates(head);
    cout<<endl;
    display(head);
    return 0;
}

