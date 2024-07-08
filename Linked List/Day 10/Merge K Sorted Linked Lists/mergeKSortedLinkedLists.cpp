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
node* mergeLists(node *ptr1, node *ptr2){
    node *head=new node(0);
    node *tail=head;
    while(ptr1 && ptr2){
        if(ptr1->data <= ptr2->data){
            tail->next=ptr1;
            ptr1=ptr1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else{
            tail->next=ptr2;
            ptr2=ptr2->next;
            tail=tail->next;
            tail->next=NULL;
        }
    }
    
    if(ptr1)
        tail->next=ptr1;
    else
        tail->next=ptr2; 
    tail=head;
    head=head->next;
    delete tail;
    return head;
}
node * mergeKLists(node *arr[], int K){
    node *root=arr[0];
    for(int i=1; i<K; i++){
        root=mergeLists(root,arr[i]);
    }
    return root;
}
int main(){
    int arr1[]={1,2,4};
    int arr2[]={3,6};
    int arr3[]={4,5,9,10};
    int arr4[]={7};
    int arr5[]={6,8};
    int arr6[]={2,7,8,10};
    int arr7[]={17,19,22};
    int arr8[]={4,18};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);
    int n4=sizeof(arr4)/sizeof(arr4[0]);
    int n5=sizeof(arr5)/sizeof(arr5[0]);
    int n6=sizeof(arr6)/sizeof(arr6[0]);
    int n7=sizeof(arr7)/sizeof(arr7[0]);
    int n8=sizeof(arr8)/sizeof(arr8[0]);
    node *head1=NULL;
    node *head2=NULL;
    node *head3=NULL;
    node *head4=NULL;
    node *head5=NULL;
    node *head6=NULL;
    node *head7=NULL;
    node *head8=NULL;
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
    for(int i=0; i<n6; i++){
        head6=insertAtEnd(head6, arr6[i]);
    }
    for(int i=0; i<n7; i++){
        head7=insertAtEnd(head7, arr7[i]);
    }
    for(int i=0; i<n8; i++){
        head8=insertAtEnd(head8, arr8[i]);
    }
   
    node* lists[]={head1,head2,head3,head4,head5,head6,head7,head8};
    node *root=NULL;
    root=mergeKLists(lists,8);
    cout<<endl;
    display(root);
    return 0;
}

/*
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

Input:
K = 4
value = {{1,2,3},{4 5},{5 6},{7,8}}
Output: 1 2 3 4 5 5 6 7 8
Explanation:
The test case has 4 sorted linked 
list of size 3, 2, 2, 2
1st    list     1 -> 2-> 3
2nd   list      4->5
3rd    list      5->6
4th    list      7->8
The merged list will be
1->2->3->4->5->5->6->7->8.
Example 2:

Input:
K = 3
value = {{1,3},{4,5,6},{8}}
Output: 1 3 4 5 6 8
Explanation:
The test case has 3 sorted linked
list of size 2, 3, 1.
1st list 1 -> 3
2nd list 4 -> 5 -> 6
3rd list 8
The merged list will be
1->3->4->5->6->8.
Your Task:
The task is to complete the function mergeKList() which merges the K given lists into a sorted one. The printing is done automatically by the driver code.

Time Complexity: O(k*n^2)
Auxiliary Space: O(k)
Note: n is the maximum size of all the k link list

Constraints
1 <= K <= 103
*/