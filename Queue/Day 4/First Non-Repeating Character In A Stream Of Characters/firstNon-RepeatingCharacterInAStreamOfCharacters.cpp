#include<bits/stdc++.h>
using namespace std;
string solve(string a){
    queue<char>q;
    string b;
    int alphabets[26]={0};
    for(int i=0; i<a.size(); i++){
        q.push(a[i]);
        alphabets[a[i]-'a']++;
        while(!q.empty()){
            if(alphabets[q.front()-'a']==1){
                b.push_back(q.front());
                break;
            }
            else{
                q.pop();
            }
        }
        if(q.empty()){
            b.push_back('#');
        }
    }
    return b;
}
int main(){
    //string a="abadbc";
    //string a="aabbdd";
    //string a="abcacdbd";
    string a="abcabc";
    //string a="ababdc";
    cout<<solve(a);
    return 0;
}
/*
Problem Description

Given a string A denoting a stream of lowercase alphabets. You have to make new string B.

B is formed such that we have to find first non-repeating character each time a character is inserted to the stream and append it at the end to B. If no non-repeating character is found then append '#' at the end of B.



Problem Constraints
1 <= length of the string <= 100000



Input Format
The only argument given is string A.



Output Format
Return a string B after processing the stream of lowercase alphabets A.



Example Input
Input 1:

 A = "abadbc"
Input 2:

 A = "abcabc"


Example Output
Output 1:

 "aabbdd"
Output 2:

 "aaabc#"


Example Explanation
Explanation 1:

    "a"      -   first non repeating character 'a'
    "ab"     -   first non repeating character 'a'
    "aba"    -   first non repeating character 'b'
    "abad"   -   first non repeating character 'b'
    "abadb"  -   first non repeating character 'd'
    "abadbc" -   first non repeating character 'd'
Explanation 2:

    "a"      -   first non repeating character 'a'
    "ab"     -   first non repeating character 'a'
    "abc"    -   first non repeating character 'a'
    "abca"   -   first non repeating character 'b'
    "abcab"  -   first non repeating character 'c'
    "abcabc" -   no non repeating character so '#'
*/