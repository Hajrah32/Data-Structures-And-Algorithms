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
        if(isEmpty()){
            front=rear=0;
            arr[rear]=data;
            cout<<arr[rear]<<" has been pushed in queue.\n";
        }
        else if(!isFull()){
            rear=(rear+1)%size;
            arr[rear]=data;
            cout<<arr[rear]<<" has been pushed in queue.\n";
        }
        else{
            cout<<"Can't push! Queue is already full.\n";
        }
    }
    void pop(){
        if(!isEmpty()){
            if(front==rear){
                front=-1;
                rear=-1;
            }
            else{
            cout<<arr[front]<<" has been popped from queue.\n";
            front=(front+1)%size;
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
        return (front==(rear+1)%size);
    }
    bool isEmpty(){
        return (front==-1);
    }
};
int main(){
    Queue q(10);
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
