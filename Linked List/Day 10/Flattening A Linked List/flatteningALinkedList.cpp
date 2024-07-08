#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next, *bottom;
    node(int val){
        data=val;
        next=NULL;
        bottom=NULL;
    }
};
node* insertAtEnd(node *head, int data){
    node *temp=new node(data);
    if(head==NULL){
        head=temp;
    }
    else{
        node *curr=head;
        while(curr->bottom!=NULL){
            curr=curr->bottom;
        }
        curr->bottom=temp;
    }
    return head;
}

void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->bottom;
    }
}
node* mergeLists(node *ptr1, node *ptr2){
    node *head=new node(0);
    node *tail=head;
    while(ptr1 && ptr2){
        if(ptr1->data <= ptr2->data){
            tail->bottom=ptr1;
            ptr1=ptr1->bottom;
            tail=tail->bottom;
            tail->bottom=NULL;
        }
        else{
            tail->bottom=ptr2;
            ptr2=ptr2->bottom;
            tail=tail->bottom;
            tail->bottom=NULL;
        }
    }
    
    if(ptr1)
        tail->bottom=ptr1;
    else
        tail->bottom=ptr2; 
    tail=head;
    head=head->bottom;
    delete tail;
    return head;
}
node *flatten(node *root){
    node *ptr1, *ptr2, *ptr3;
    while(root->next!=NULL){
        ptr1=root;
        ptr2=root->next;
        ptr3=root->next->next;
        ptr1->next=NULL;
        ptr2->next=NULL;
        root=mergeLists(ptr1,ptr2);
        root->next=ptr3;
    }
    
    return root;
}
int main(){
    int arr1[]={5,7,8,30};
    int arr2[]={10,20,40};
    int arr3[]={19,22,50};
    int arr4[]={28,35,40,45};
    int arr5[]={30,34,40};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    int n4=sizeof(arr4)/sizeof(arr4[0]);
    int n5=sizeof(arr5)/sizeof(arr5[0]);
    node *head1=NULL;
    node *head2=NULL;
    node *head3=NULL;
    node *head4=NULL;
    node *head5=NULL;
    for(int i=0; i<n1; i++){
        head1=insertAtEnd(head1, arr1[i]);
    }
    for(int i=0; i<n2; i++){
        head2=insertAtEnd(head2, arr2[i]);
    }
    for(int i=0; i<n3; i++){
        head3=insertAtEnd(head3, arr3[i]);
    }
    for(int i=0; i<n4; i++){
        head4=insertAtEnd(head4, arr4[i]);
    }
    for(int i=0; i<n5; i++){
        head5=insertAtEnd(head5, arr5[i]);
    }
  
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=head5;
    
    node *head=NULL;
    head=flatten(head1);
    
    cout<<endl;
    display(head);
    return 0;
}

/*
Given a Linked List of size n, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 

Note: The flattened list will be printed using the bottom pointer instead of the next pointer.
For more clarity have a look at the printList() function in the driver code.

 

Examples:

Input:
5 -> 10 -> 19 -> 28
|     |     |     | 
7     20    22   35
|           |     | 
8          50    40
|                 | 
30               45
Output:  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Input:
5 -> 10 -> 19 -> 28
|          |                
7          22   
|          |                 
8          50 
|                           
30              
Output: 5-> 7-> 8-> 10-> 19-> 22-> 28-> 30-> 50
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Note : In the output section of the above examples the -> represents the bottom pointer.

Expected Time Complexity: O(n * n * m)
Expected Auxiliary Space: O(n)

Constraints:
0 <= n <= 50
1 <= mi <= 20
1 <= Element of linked list <= 103


*/