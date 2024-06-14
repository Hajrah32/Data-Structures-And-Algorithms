#include<bits/stdc++.h>
using namespace std;
void lpsFind(string needle,vector<int> & lps);
bool circularPatternMatching(string haystack,string needle);
int main(){
    string haystack="cdfeabroab";
    string needle="abcde";
    cout<<circularPatternMatching(haystack,needle);
    
    
    return 0;
}
void lpsFind(string needle,vector<int> & lps){
    int pref=0, suff=1;
    while(suff<needle.size()){
        if(needle[pref]=needle[suff]){
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
bool circularPatternMatching(string haystack,string needle){
    vector<int>lps(needle.size(),0);
    lpsFind(needle,lps);
    int first=0,second=0;
    haystack+=haystack;
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