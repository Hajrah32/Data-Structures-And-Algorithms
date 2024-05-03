#include<bits/stdc++.h>
using namespace std;
vector<int> factorial(int N);
int main(){   
    int n;
    cout<<"Enter number: ";
    cin>>n;
    vector<int>fact=factorial(n);
    for(int i=0; i<fact.size(); i++)
        cout<<fact[i];
    return 0;
    
}
vector<int> factorial(int N){
    vector<int>fact={1};
    while(N >1){
        int carry=0;
        for(int i=0; i<fact.size(); i++){
            int temp=(fact[i]*N) +carry;
            carry=temp /10;
            fact[i]=temp%10;
        }
        while(carry){
            fact.push_back(carry%10);
            carry/=10;
        }
        N--;
    }
    int start=0, end=fact.size()-1;
    while(start<end){
        swap(fact[start],fact[end]);
        start++;
        end--;
    }
    return fact;
}