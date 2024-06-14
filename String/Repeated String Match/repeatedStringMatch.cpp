#include<bits/stdc++.h>
using namespace std;
void lpsFind(string needle,vector<int> & lps);
bool patternMatching(string a,string b);
int repeatedStringMatch(string a, string b);
int main(){
    //string a="abcd";
    //string b="cdabcdab";
    //string a="a";
    //string b="aa";
    string a="abaabaa";
    string b="abaababaab";
    cout<<repeatedStringMatch(a,b);
    return 0;
}
void lpsFind(string needle,vector<int> & lps){
    int pref=0, suff=1;
    while(suff<needle.size()){
        if(needle[pref]==needle[suff]){
            lps[suff]=pref+1;
            suff++;
            pref++;
        }
        else{
            if(pref==0){
                lps[suff]=0;
                suff++;
            }
            else{
                pref=lps[pref-1];
            }
        }
    }
}
bool patternMatching(string haystack,string needle){
    vector<int>lps(needle.size(),0);
    lpsFind(needle,lps);
    int first=0,second=0;
    while(first<haystack.size() && second<needle.size()){
        if(haystack[first]==needle[second]){
            first++;
            second++;
        }
        else{
            if(second==0)
                first++;
            else
                second=lps[second-1];
        }
    }
    if(second==needle.size())
        return 1;
    else    
        return 0;
}
int repeatedStringMatch(string a, string b) {
    int repeat=1;
    string temp=a;
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }
    if(patternMatching(temp,b)==1)
        return repeat;
    else if(patternMatching(temp+a,b)==1)
        return repeat+1;
    else    
        return -1;
}


/*
Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

 

Example 1:

Input: a = "abcd", b = "cdabcdab"
Output: 3
Explanation: We return 3 because by repeating a three times "abcdabcdabcd", b is a substring of it.
Example 2:

Input: a = "a", b = "aa"
Output: 2

TC: O(n)
SC: O(n)


*/