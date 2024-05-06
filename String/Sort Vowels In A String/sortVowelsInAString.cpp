#include<bits/stdc++.h>
using namespace std;
string sortVowels(string s);
int main()
{   
    string s="lEetcOde";
    //string s="lYmpH";
    cout<<sortVowels(s);
    return 0;
    
} 
string sortVowels(string s){
    int upper[26]={0};
    int lower[26]={0};
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){ 
            upper[s[i]-'A']++;
            s[i]='#';
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
    }
    string vowel;
    for(int k=0; k<26; k++){
        char ch='A' + k;
        while(upper[k]>0){
            vowel+=ch;
            upper[k]--;
        }
    }
    for(int k=0; k<26; k++){
        char ch='a' + k;
        while(lower[k]>0){
            vowel+=ch;
            lower[k]--;
        }
    }
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='#'){
            s[i]= vowel[j];
            j++;
        }
    }
    return s;
}