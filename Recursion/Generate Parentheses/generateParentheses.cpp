#include<bits/stdc++.h>
using namespace std;
void generateParanthesis(int n, int L, int R,vector<string> &ans,string &temp);
int main(){
    int n=3;
    string temp;
    vector<string>ans;
    generateParanthesis(n,0,0,ans,temp);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}

void generateParanthesis(int n, int L, int R,vector<string> &ans,string &temp){
    if(L==n && R==n){
        ans.push_back(temp);   
        return;
    }
    if(L<n){
        temp.push_back('(');
        generateParanthesis(n,L+1,R,ans,temp);
        temp.pop_back();
    }
    if(R<L){
        temp.push_back(')');
        generateParanthesis(n,L,R+1,ans,temp);
        temp.pop_back();
    }
    
}


/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses using the concept of recursion.
For Example, n=2: ans=(),(()) 
n=3 ans=()()(), (())(),()(()), ((())),(()())
Time complexity: 2^n

*/