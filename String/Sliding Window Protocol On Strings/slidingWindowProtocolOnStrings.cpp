#include<iostream>
using namespace std;
int lengthOfLongestSubstring(string s);
int main(){
    //string s = "abcabcbb";
    //string s="bbbb";
    string s = "pwwkew";
    //string s="abcdecbeadf";
    //string s=" ";
    //string s="";
    cout<<lengthOfLongestSubstring(s);   
    return 0;
}
int lengthOfLongestSubstring(string s){
    int len=1, i=0;
    for(int j=1; j<s.length(); j++){
        int l=1, k=i;
        while(k<j){
            if(s[k]!=s[j]){
                l++;
            }
            else{
                i=k+1;
                break;
            }
            k++;
        }
        
        len=max(l,len);
    } 
    if(s.length()==0){
        len=0;
    }
    return len;
}