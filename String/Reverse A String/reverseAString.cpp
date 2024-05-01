#include<bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{   
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<reverseString(s);
    return 0;
    
} 
string reverseString(string s){
    int n=s.size();
    int start=0, end=n-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}