#include<bits/stdc++.h>
using namespace std;
string sortSentence(string s);
int main()
{   
    string s = "is2 sentence4 This1 a3";
    cout<<sortSentence(s);
    return 0;
    
} 
string sortSentence(string s){
    string str[9];
    string word;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]== ' '){
            int l=word[word.length()-1]-'0';
            word.pop_back();
            str[l-1]=word;
            word.clear();
            count++;
        }
        else{
            word+=s[i];
        }
    }
    int l=word[word.length()-1]-'0';
    word.pop_back();
    str[l-1]=word;
    string str2;
    int i=0;
    while(i < count){
        str2+=str[i]+' ';
        i++;
    }
    str2+=str[i];
    return str2;
}