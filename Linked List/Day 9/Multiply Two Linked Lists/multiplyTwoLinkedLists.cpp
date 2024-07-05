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
long long  multiplyTwoLists (node* l1, node* l2){
    int m = 1000000007;
    node *curr1=l1, *curr2=l2;

    //convert those element into single number
    long long num1=0, num2=0;
    long long mul=1;
    while(curr1){
        num1=((num1*10)+curr1->data)%m; 
        curr1=curr1->next;
    }
    mul=1;
    while(curr2){
        num2=((num2*10)+curr2->data)%m;
        curr2=curr2->next;
        
    }
    long long ans=(num1*num2)%m;
    //multiply both numbers
    return ans;

}

int main(){
    int arr1[]={9,9,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={9,2};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    node *head1=NULL;
    node *head2=NULL;
    for(int i=0; i<n1; i++){
        head1=insertAtEnd(head1, arr1[i]);
    }
    for(int i=0; i<n2; i++){
        head2=insertAtEnd(head2, arr2[i]);
    }
    
    
    display(head1);

    cout<<endl;
    display(head2);
    cout<<endl;
    cout<<multiplyTwoLists(head1,head2);
    return 0;
}

/*
Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 

Note: The output could be large take modulo 109+7.

Example:

Input:
2
2
3 2
1
2
3
1 0 0
2
1 0 
Output:
64
1000

Explanation:
Testcase 1: 32*2 = 64.
Testcase 2: 100*10 = 1000.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow, the first line of each test case contains an integer N denoting the size of the first linked list (L1). In the next line are the space-separated values of the first linked list. The third line of each test case contains an integer M denoting the size of the second linked list (L2). In the fourth line is space-separated values of the second linked list.

Output:
For each test case output will be an integer denoting the product of the two linked lists.

Your Task:
The task is to complete the function multiplyTwoLists() which should multiply the given two linked lists and return the result.

Constraints:
1 <= T <= 100
1 <= N, M <= 100
*/