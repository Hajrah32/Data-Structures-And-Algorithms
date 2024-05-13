#include<bits/stdc++.h>
using namespace std;
void lowerToUpper(string& str, int n);
int main(){
    string str="geeksS";
    
    lowerToUpper(str,str.length()-1); 
    cout<<str;
    return 0;
}
void lowerToUpper(string& str, int n){
    if(n==-1){
        return ;
    }
    str[n]=(str[n]-'a') + 'A';
    lowerToUpper(str, n-1);
}
/*
Convert  
*/