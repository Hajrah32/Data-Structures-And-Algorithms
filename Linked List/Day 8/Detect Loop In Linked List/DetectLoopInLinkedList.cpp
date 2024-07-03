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
    node *temp=new node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
    return head;
}
node* addLoop(node *head){
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    return curr;
}
bool isExist(vector<node*>visited,node *add){
    for(int i=0; i<visited.size(); i++){
        if(visited[i]==add)
            return 1;
    }
    return 0;
}
bool detectLoop(node* head){
    vector<node*>visited;
    node* temp=head->next;
    while(temp!=NULL){
        if(isExist(visited,temp)){
            return 1;
        }
        else{
            visited.push_back(temp);
            temp=temp->next;
        }
    }
    cout<<endl;
    return 0;
    
}
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    node *head=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    //display(head);
    node *loopBegin=addLoop(head);
    int arr2[]={6,7,8,9,10};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0; i<n2; i++){
        head=insertAtEnd(head, arr2[i]);
    }
    cout<<endl;
    display(head);
    cout<<endl<<detectLoop(head);
    node *loopEnd=addLoop(head);
    loopEnd->next=loopBegin;
    cout<<endl<<detectLoop(head);
    return 0;
}

/*
Given the head of a singly linked list, the task is to check if the linked list has a loop. A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the last node is null. then there is no loop. We need to return true if there is a loop, otherwise false.

The following is an internal representation of every test case (three inputs).
n : Size of the linked list
value[] :  An array of values that represents values of nodes.
pos (1 based index) :  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

Examples:

Input: n = 3, value[] = {1,3,4}, pos = 2
Output: True
Explanation: 

See the above list there exists a loop connecting the last node back to the second node.
Input: n = 4, value[] = {1,8,3,4}, pos = 0
Output: False
Explanation: 

There is no loop exists.
Input: n = 4, value[] = {1,2,3,4}, pos = 1
Output: True
Explanation:

A loop is present connecting the last node back to the first node.
Time Complexity: O(n^2)
Expected Auxiliary Space: O(n)
*/