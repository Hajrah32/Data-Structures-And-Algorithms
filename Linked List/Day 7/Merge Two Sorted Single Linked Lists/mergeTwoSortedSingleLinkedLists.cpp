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
node* sortedMerge(node* head1, node* head2){
    node *head=new node(0);
    node *tail=head;
    while(head1 && head2){
        if(head1->data <= head2->data){
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
            tail->next=head2;            head2=head2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    if(head1)
        tail->next=head1;
    else
        tail->next=head2;
    tail=head;
    head=head->next;
    delete tail;
    return head;
}

int main(){
    int arr1[]={5,10,15,40};
    int arr2[]={2,4,20};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    node *head=NULL;
    node *head1=NULL;
    node *head2=NULL;
    for(int i=0; i<n1; i++){
        head1=insertAtEnd(head1,arr1[i]);
    }
    for(int i=0; i<n2; i++){
        head2=insertAtEnd(head2,arr2[i]);
    }
    cout<<"List 1: ";
    display(head1);
    cout<<endl;
    cout<<"List 2: ";
    display(head2);
    cout<<endl;
    

    head=sortedMerge(head1,head2);
    cout<<endl<<"Merge List: ";
    display(head);
    return 0;
}

/*

*/