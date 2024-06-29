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
node* insertAtEnd(int arr[],int index,int n,node* back){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->prev=back;
    temp->next=insertAtEnd(arr,index+1,n,temp);
    return temp;
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
    node *head=NULL, *back=NULL;
    head=insertAtEnd(arr, 0, n, back);
    
    display(head);
    return 0;
}

