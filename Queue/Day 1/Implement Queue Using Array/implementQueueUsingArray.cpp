#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int size, front, rear;
    public:
    Queue(int s){
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data){
        if(!isFull()){
            rear++;
            arr[rear]=data;
            cout<<arr[rear]<<" has been pushed in queue.\n";
            if(front==-1)
                front++;
        }
        else{
            cout<<"Can't push! Queue is already full.\n";
        }
    }
    void pop(){
        if(!isEmpty()){
            cout<<arr[front]<<" has been popped from queue.\n";
            front++;
            if(front>rear){
                front=-1;
                rear=-1;
            }
        }
        else{
            cout<<"Can't pop! Queue is already empty.\n";
        }
    }
    int givefront(){
        if(!isEmpty()){
            return arr[front];
        }
        else{
            return -1;
        }
    }
    bool isFull(){
        return (rear==size-1);
    }
    bool isEmpty(){
        return (front==-1);
    }
};
int main(){
    Queue q(10);
    cout<<"Front: "<<q.givefront()<<endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();
    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();

    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();

    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();

    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();

    cout<<"Front: "<<q.givefront()<<endl;
    q.pop();

    return 0;
}
