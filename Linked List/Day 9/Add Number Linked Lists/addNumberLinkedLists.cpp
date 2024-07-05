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
node* addTwoLists(node* num1, node* num2){
    //count total numbers in lists
    int mul1=1, mul2=1;
    node *list1=num1, *list2=num2;
    while(list1->next){
        mul1*=10;
        list1=list1->next;
    }
    while(list2->next){
        mul2*=10;
        list2=list2->next;
    }
    //multiply each list element with 10^of that count and add in a number
    int add1=0, add2=0;
    list1=num1;
    list2=num2;
    while(list1){
        int rem=list1->data % 10;
        add1+=rem*mul1;
        mul1/=10;
        list1=list1->next;
    }
    while(list2){
        int rem=list2->data % 10;
        add2+=rem*mul2;
        mul2/=10;
        list2=list2->next;
    }
    //add both numbers
    int sum=add1+add2;
    //find all of the remainders of that sum and insert them into new list from start

    node *head=NULL;
    while(sum>0){
        int value=sum%10;
        sum/=10;

        if(head==NULL){
            head=new node(value);
        }
        else{
            node *temp=new node(value);
            temp->next=head;
            head=temp;
        }
    }
    //return the head of that new list
    return head;
}

int main(){
    int arr1[]={9,7,6,8,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={6,4,3,8};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    node *head1=NULL;
    node *head2=NULL;
    node *head3=NULL;
    for(int i=0; i<n1; i++){
        head1=insertAtEnd(head1, arr1[i]);
    }
    for(int i=0; i<n2; i++){
        head2=insertAtEnd(head2, arr2[i]);
    }
    
    cout<<endl;
    display(head1);

    cout<<endl;
    display(head2);
    head3=addTwoLists(head1,head2);
    cout<<endl;
    display(head3);
    return 0;
}

/*
Given two numbers, num1 and num2, represented by linked lists of size n and m respectively. The task is to return a linked list that represents the sum of these two numbers.

For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Example 1:

Input:
n = 2
num1 = 45 (4->5->null)
m = 3
num2 = 345 (3->4->5->null)
Output: 
3->9->0->null  
Explanation: 
For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).
Example 2:

Input:
n = 4
num1 = 0063 (0->0->6->3->null)
m = 2
num2 = 07 (0->7->null)
Output: 
7->0->null
Explanation: 
For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).
Your Task:
The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

Expected Time Complexity: O(n+m)
Expected Auxiliary Space: O(max(n,m)) for the resultant list.

Constraints:
1 <= n, m <= 104
*/