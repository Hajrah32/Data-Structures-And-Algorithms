#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
void printBits(int n,vector<string>&ans, string& str, int zeros, int ones);
int main(){
    int n=2;
    string str;
    int zeros=0,ones=0;
    vector<string>ans;
    printBits(n,ans,str,zeros,ones);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }    
    return 0;
}
void printBits(int n,vector<string>&ans, string& str, int zeros, int ones){
    
    if(zeros<=ones){
        if(str.length()==n){
            ans.push_back(str);
            return;
        }
        str.push_back('1');  
        printBits(n,ans,str,zeros,ones+1);
        str.pop_back();
        str.push_back('0'); 
        printBits(n,ans,str,zeros+1,ones);  
        
        
    }
    return;
}