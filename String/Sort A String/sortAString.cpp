#include<bits/stdc++.h>
using namespace std;
string sort(string s);
int main()
{   
    //string s = "edcab";
    string s = "edcaaabbsdsvfgsdsb";
    cout<<sort(s);
    return 0;
    
} 
string sort(string s){
    int alphabets[26]={0};
    string ans;
    for(int i=0; i<s.size(); i++)
        alphabets[s[i] - 'a']++;
    for(int i=0; i<26; i++)
        for(int j=0; j<alphabets[i]; j++)
            ans+=i + 'a';
    return ans;
}