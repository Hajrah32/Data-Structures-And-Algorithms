#include<bits/stdc++.h>
using namespace std;
void lowercaseConversion(string& str, int n);
int main(){
    //string str="AbC";
    string str="ABCddE";
    lowercaseConversion(str,str.length()-1); 
    cout<<str;
    return 0;
}


void lowercaseConversion(string& str, int n){
    if(n==-1){
        return ;
    }
    if(str[n]<'a')
        str[n]=(str[n]-'A') + 'a';
    lowercaseConversion(str, n-1);
}