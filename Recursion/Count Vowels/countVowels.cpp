#include<bits/stdc++.h>
using namespace std;
int countVowels(string str, int n);
int main(){
    string str="abba";
    //string str="mom";
    //string str="mama";
    cout<<countVowels(str,str.length()-1); 
    return 0;
}
int countVowels(string str, int n){
   if(n==-1)
        return 0;
    if(str[n]=='a' || str[n]=='e' || str[n]=='i' || str[n]=='o' || str[n]=='u' || str[n]=='A' || str[n]=='E' || str[n]=='I' || str[n]=='O' || str[n]=='U')
        return 1+countVowels(str,n-1);
    else
        return countVowels(str, n-1);
}
