#include<bits/stdc++.h>
using namespace std;
int findSubString(string str);
int main(){
    //string str="AABBBCBBAC";
    //string str="aaab";
    string str="GEEKSGEEKSFOR";
    cout<<findSubString(str);   
    return 0;
}
int findSubString(string str){
    int diff=0;
    vector<int> ch(256,0);
    for(int i=0; i<str.size(); i++){
        if(ch[str[i]]==0){
            diff++;
        }
        ch[str[i]]++;
    }
    for(int i=0; i<256; i++){
        ch[i]=0;
    }
    int first=0, second=0, len=str.length();
    while(second<str.length()){
        while(diff!=0 && second<str.length()){
            if(ch[str[second]]==0){
                diff--;
            }
            ch[str[second]]++;
            second++;
        }
        len=min(len,(second-first));
        while(diff!=1){
            len=min(len,(second-first));
            ch[str[first]]--;
            if(ch[str[first]]==0)
                diff++;
            first++;
        }
    }
    return len;
}