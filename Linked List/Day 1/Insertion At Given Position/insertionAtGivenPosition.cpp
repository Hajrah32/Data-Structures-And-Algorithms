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
void insertAtMiddle(int data, node *head, int pos){
    node *temp=head;
    int i=1;
   
    while(i<pos){
        temp=temp->next;
        i++;
    }
    node * loc=new node(data);
    loc->next=temp->next;
    temp->next=loc;
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
    
    int pos=1;

    display(head);
    cout<<endl;
    insertAtMiddle(50, head, pos);
    display(head);

    return 0;
}