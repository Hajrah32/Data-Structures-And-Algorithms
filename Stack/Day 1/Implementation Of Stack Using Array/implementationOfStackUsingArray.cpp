#include<bits/stdc++.h>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top;
    public:
        Stack(int s){
            size=s;
            arr=new int[size];
            top=-1;
        }
        //push
        void push(int value){
            if(top==size-1){
                cout<<"Stack Overflow\n";
                return;
            }
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" into stack\n";
        }
        //pop
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow\n";
                return;
            }
            cout<<"Popped "<<arr[top]<<" from stack"<<endl;
            top--;
        }
        //peek
        int peek(){
            if(top==-1){
                cout<<"Stack is Empty\n";
                return -1;
            }
            return arr[top];
            
        }
        //isEmpty
        bool isEmpty(){
            return top==-1;
        }
        //isSize
        int isSize(){
            return top+1;
        }
        
};
int main(){
    Stack s(5);
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
