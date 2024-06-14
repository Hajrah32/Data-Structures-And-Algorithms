#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle);
int main(){

    //string haystack="abcaddefg";
    //string needle="deff";
    string haystack="onionionson";
    string needle="onions";
    //string haystack="sadbutsad";
    //string needle="sad";
    cout<<strStr(haystack,needle);
cout<<"test";
    return 0;
}
int strStr(string haystack, string needle) {
    int pref=0, suff=1;
    vector<int>lps(needle.size(),0);
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
    int first=0,second=0;
    while(first<haystack.size() && second<needle.size()){
        if(haystack[first]==needle[second]){
            first++;
            second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }
        }
    }
    if(second!=needle.size())
        return -1;
    else    
        return first-second;
}

/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

TC: O(n)
SC: O(n)
*/