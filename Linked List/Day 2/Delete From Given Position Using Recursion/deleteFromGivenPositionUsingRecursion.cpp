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
node* deleteANode(node *curr, int x){
    if(x==1){
        node *temp=curr->next;
        delete curr;
        return temp;
    }
    curr->next=deleteANode(curr->next, x-1);
    return curr;
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
    int x=3;
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtStart(head, arr[i]);
    }
    display(head);
    cout<<endl;
    head=deleteANode(head,x);
    display(head);
    cout<<endl;
    return 0;
}