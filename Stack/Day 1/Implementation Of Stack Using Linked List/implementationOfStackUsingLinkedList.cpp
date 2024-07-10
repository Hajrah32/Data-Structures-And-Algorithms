#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int val){
            data=val;
            next=NULL;
        }
};
class Stack{
    node *top;
    int size;
    public:
        Stack(){
            top=NULL;
            size=0;
        }
        //push
        void push(int value){
            node *temp=new node(value);
            //when heap(RAM) is full
            if(temp==NULL){
                cout<<"Stack Overflow\n";
                return;
            }
            temp->next=top;
            cout<<"Pushed "<<temp->data<<" into Stack\n";
            top=temp;
            size++;
        }
        //pop
        void pop(){
            if(top==NULL){
                cout<<"Stack Underflow\n";
                return;
            }
            node *temp=top;
            cout<<"Popped "<<temp->data<<" from Stack\n";
            top=top->next;
            delete temp;
            size--;
        }
        //peek
        int peek(){
            if(top==NULL){
                cout<<"Stack is Empty\n";
                return -1;
            }
            return top->data;
            
        }
        //isEmpty
        bool isEmpty(){
            return top==NULL;
        }
        //isSize
        int isSize(){
            return size;
        }
        
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(-1);
    int val=s.peek();
    if(!s.isEmpty())
        cout<<val;

    s.pop();
    val=s.peek();
    if(!s.isEmpty())
        cout<<val;
    return 0;
}
