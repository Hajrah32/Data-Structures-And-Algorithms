#include<bits/stdc++.h>
using namespace std;
class Deque{
    public:
    int front,rear,size;
    int *arr;
    Deque(int n){
        rear=front=-1;
        size=n;
        arr=new int[size];
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return (rear+1)%size==front;
    }
    void push_front(int val){
        if(isEmpty()){
            front=rear=0;
            arr[front]=val;
            cout<<"Push Front: "<<arr[front]<<endl;
        }
        else if(isFull()){
            cout<<"Queue is full!\n";
        }
        else{
            front=(front-1 +size)%size;
            arr[front]=val;
            cout<<"Push Front: "<<arr[front]<<endl;
        }
    }
    void push_back(int val){
        if(isEmpty()){
            front=rear=0;
            arr[rear]=val;
            cout<<"Push Back: "<<arr[rear]<<endl;
        }
        else if(isFull()){
            cout<<"Queue is full!\n";
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=val;
            cout<<"Push Back: "<<arr[front]<<endl;
        }
    }
    void pop_front(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
        }
        else{
            if(front==rear){
                cout<<"Pop front: "<<arr[front]<<endl;
                front=rear=-1;
            }
            else{
                cout<<"Pop front: "<<arr[front]<<endl;
                front=(front+1)%size;
            }
        }
    }
    void pop_back(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
        }
        else{
            if(front==rear){
                cout<<"Pop back: "<<arr[rear]<<endl;
                front=rear=-1;
            }
            else{
                cout<<"Pop back: "<<arr[rear]<<endl;
                rear=(rear-1+size)%size;
            }
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
            return -1;
        }
        else{
            return arr[front];
        }
    }
    int end(){
        if(isEmpty()){
            cout<<"Queue is empty!\n";
            return -1;
        }
        else{
            return arr[rear];
        }
    }
};
int main(){
    Deque dq(5);
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
