#include<bits/stdc++.h>
using namespace std;
bool palindromeString(string s);
int main()
{   
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<palindromeString(s);
    return 0;
    
} 
bool palindromeString(string s){
    int n=s.size();
    int start=0, end=n-1;
    while(start<end){
        if(s[start]!=s[end])
            return false;
        start++;
        end--;
    }
    return true;
}