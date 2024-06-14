#include<bits/stdc++.h>
using namespace std;
int main(){
    //string str="ABCDEABCD";
    //string str="ABCABDABCABCABD";
    string str="ABCABDABCABDABDAB";
    /*string prefix,suffix;
    int p=0,s=str.size()-1, len=0;
    while(p<=s){
        prefix=prefix+str[p];
        p++;
        suffix=str[s]+suffix;
        s--;
        if(prefix==suffix)
            len=max(len,p);
    }
    cout<<len;

//Time Complexity: O(n^2)
//Space complexity: O(n)
    */
    vector<int>LPS(str.size(),0);
    int p=0,s=1;
    while(s<str.size()){
        if(str[p]==str[s]){
            LPS[s]=p+1;
            s++;
            p++;
        }
        else{
            if(p==0){
            LPS[s]=0;
            s++;
            }
            else{
                p=LPS[p-1];
            }      
        }        
    }
    cout<<LPS[LPS.size()-1];

    return 0;
}

/*
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.

NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Example 1:

Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper 
prefix and suffix. 
Example 2:

Input: s = "aaaa"
Output: 3
Explanation: "aaa" is the longest proper 
prefix and suffix. 
Your task:
You do not need to read any input or print anything. The task is to complete the function lps(), which takes a string as input and returns an integer.

Time Complexity: O(|s|)
Auxiliary Space: O(|s|)
*/