#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
    stack<char>a,b;
    int i=0;
    while(i<s.size()){
        if(s[i]!='#')
            a.push(s[i]);
        else if(!a.empty())   
            a.pop();
        i++;
    }
    i=0;
    while(i<t.size()){
        if(t[i]!='#')
            b.push(t[i]);
        else if(!b.empty()) 
            b.pop();
        i++;
    }
    while(!a.empty() && !b.empty()){
        if(a.top()!=b.top())
            return 0;
        else{
            a.pop();
            b.pop();
        }
    }
    if(a.empty() && b.empty())
        return 1;
    else    
        return 0;
}
int main(){
    //string s = "ab#c", t = "ad#c";
    //string s = "ab#cc", t = "ad#c";
    string s = "ab##", t = "c#d#";
    //string s = "ab#c#", t = "ad#c";
    cout<<backspaceCompare(s,t);
    return 0;
}
/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".
 

Constraints:

1 <= s.length, t.length <= 200
s and t only contain lowercase letters and '#' characters.
*/