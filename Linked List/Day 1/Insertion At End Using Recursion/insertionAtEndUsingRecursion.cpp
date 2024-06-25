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
node* insertAtEndUsingRecursion(int arr[], int index, int n){
    if(index==n){
        return NULL;
    }
    node *temp=new node(arr[index]);
    temp->next=insertAtEndUsingRecursion(arr,index+1,n);;
    return temp;
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
    head=insertAtEndUsingRecursion(arr,0,n);
    display(head);
    return 0;
}