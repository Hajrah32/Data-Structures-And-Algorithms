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

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* reverseBetween(node* head, int m, int n){
    node *prev, *curr, *front, *first, *second;
    int reserve=m;
    n=(n-m)+1;
    if(m==1){
        prev=new node(0);
        prev->next=head;
        head=prev;
        curr=prev->next;
        
    
    }
    else{
        m=m-1;
        curr=head;
        while(m--){
            prev=curr;
            curr=curr->next;
        }
    }
    front=prev->next->next, first=prev, second=prev->next;
    while(n--){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    first->next=prev;
    second->next=curr;
    if(reserve==1){
        prev=head;
        head=head->next;
        delete prev;
    }
    return head;
}   
int main(){
    int arr[]={1,7,5,3,9,8,10,2,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
 
    node *head=NULL;
    node *head2=NULL;
    for(int i=0; i<n; i++){
        head=insertAtEnd(head, arr[i]);
    }
    //int a=1, b=8;
    int a=3, b=10;

    cout<<endl;
    display(head);

    cout<<endl;
    head2=reverseBetween(head, a,b);
    cout<<endl;
    display(head2);
    return 0;
}

/*
Given a linked list and positions a and b. Reverse the linked list from position b to a.

Example 1:

Input :
N = 10
Linked List = 1->7->5->3->9->8->10
                      ->2->2->5->NULL
a = 1, b = 8
Output : 2 10 8 9 3 5 7 1 2 5 
Explanation :
The nodes from position 1 to 8 
are reversed, resulting in 
2 10 8 9 3 5 7 1 2 5.

Example 2:

Input:
N = 6
Linked List = 1->2->3->4->5->6->NULL
a = 2, b = 4
Output: 1 4 3 2 5 6
Explanation:
Nodes from position 2 to 4 
are reversed resulting in
1 4 3 2 5 6.
Your task :
You don't need to read input or print anything. Your task is to complete the function reverseBetween() which takes the head of the linked list and two integers a and b as input and returns the head of the new linked list after reversing the nodes from position a to b.
 
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/