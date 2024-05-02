#include<bits/stdc++.h>
using namespace std;
string defangingIPAddress(string s);
int main()
{   
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<defangingIPAddress(s);
    return 0;
    
} 
string defangingIPAddress(string s){
    int n=s.size();
    string s2;
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            s2= s2 + "[.]";
        }
        else
            s2=s2 + s[i];
    }
    return s2;
}