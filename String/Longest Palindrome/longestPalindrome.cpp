#include<bits/stdc++.h>
using namespace std;
int longestPalindrome(string s);
int main()
{   
    string s = "abccccdd";
    //string s = "aaaabbbacccdef";
    //string s = "BBbAAAAaaaabb";
    //string s="aaaabbbAAAABB";
    cout<<longestPalindrome(s);
    return 0;
    
} 
int longestPalindrome(string s){
    int lower[26]={0};
    int upper[26]={0};
    bool odd=0;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >='a')
            lower[s[i] - 'a']++;
        else 
            upper[s[i] - 'A']++;
    }
    for(int i=0; i<26; i++){
        if(lower[i]%2==0){
            count +=lower[i];
        }
        else{
            count += lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0)
            count +=upper[i];
        else{
            count+=upper[i]-1;
            odd=1;
        }
    }
    return count+odd;
}