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
node* insertAtStartUsingRecursion(int arr[], int index, int n, node *prev){
    if(index==n){
        return prev;
    }

    node *temp=new node(arr[index]);
    temp->next=prev;
    return insertAtStartUsingRecursion(arr,index+1,n,temp);;
    
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
    head=insertAtStartUsingRecursion(arr,0,n,head);
    display(head);
    return 0;
}