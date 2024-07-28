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
class Queue{
    node *front, *rear;
    public:
    Queue(){     
        front=rear=NULL;
    }
    void push(int data){
        if(isEmpty()){
            front =new node(data);
            rear=front;
        }
        else{
            rear->next=new node(data);
            rear=rear->next;
        }
        cout<<rear->data<<" has been pushed in queue.\n";
    }
    void pop(){
        if(!isEmpty()){
            node *temp=front;
            front=front->next;
            cout<<temp->data<<" has been popped from queue.\n";
            delete temp;
            
        }
        else{
            cout<<"Can't pop! Queue is already empty.\n";
        }
    }
    int givefront(){
        if(!isEmpty()){
            return front->data;
        }
        else{
            return -1;
        }
    }
    bool isEmpty(){
        return (front==NULL);
    }
};
int main(){
    Queue q;
    cout<<"Front: "<<q.givefront()<<endl;
    for(int i=0; i<15; i++){
        q.push(i+1);
    }
    for(int i=0; i<16; i++){
        cout<<"Front: "<<q.givefront()<<endl;
        q.pop();
    }
    q.push(20);
    return 0;
}
 