#include<bits/stdc++.h>
using namespace std;
bool palindrome(string str, int start, int end);
int main(){
    //string str="abba";
    //string str="mom";
    string str="mama";
    cout<<palindrome(str, 0,str.length()-1); 
    return 0;
}
bool palindrome(string str, int start, int end){
    if(start>=end)
        return 1;
    if(str[start]!=str[end])
        return 0;
    return palindrome(str,start+1,end-1);
}