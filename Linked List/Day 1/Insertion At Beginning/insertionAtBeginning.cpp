#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
Node* insertAtStart(Node *head, int data){
    if(head==NULL){
        head=new Node(data);
    }
    else{
        Node *temp =new Node(data);
        temp->next=head;
        head=temp;
    }
    return head;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    
    display(head);
    cout<<endl;
    int arr2[]={6,7,8,9,10};
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr2[i]);
    }
     head=insertAtStart(head,22);
    display(head);
    return 0;
}