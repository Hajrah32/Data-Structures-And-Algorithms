#include<bits/stdc++.h>
using namespace std;
class node{
    
    public:
    int data;
    node *next, *prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class Dequeue{
    public:
    node *front,*rear;
    Dequeue(){
        rear=front=NULL;

    }
    void push_front(int val){
        node *temp=new node(val);
        if(front==NULL){
            front=rear=temp;
            
        }
        else{
            temp->next=front;
            front->prev=temp;
            front =temp;
        }
        cout<<"Push Front: "<<front->data<<endl;
    }
    void push_back(int val){
        node *temp=new node(val);
        if(front==NULL){
            front=rear=temp;
            
        }
        else{
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
        }
        cout<<"Push Back: "<<rear->data<<endl;
    }
    void pop_front(){
        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            node *temp=front;
            front=front->next;
            
            cout<<"Pop Front: "<<temp->data<<endl;
            delete temp;
            if(front){
                front->prev=NULL;
            }
            else{
                rear=NULL;
            }
        }
    }
    void pop_back(){
        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            node *temp=rear;
            rear=rear->prev;
            
            cout<<"Pop Back: "<<temp->data<<endl;
            delete temp;
            if(rear){
                rear->next=NULL;
            }
            else{
                front=NULL;
            }
        }
    }
    int start(){
        if(front==NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
    int end(){
        if(front=NULL){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return rear->data;
        }
    }
};
int main(){
    Dequeue dq;
    dq.push_front(5);
    dq.push_front(4);
    dq.push_back(3);
    dq.push_back(2);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.start()<<endl;
    cout<<dq.end()<<endl;
    return 0;
}
