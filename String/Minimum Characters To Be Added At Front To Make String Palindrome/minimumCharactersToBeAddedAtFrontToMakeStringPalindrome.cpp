#include<bits/stdc++.h>
using namespace std;
int minChar(string str);
int main(){
    
    //string s = "aacecaaa";
    string s = "aaaotcaakr";
    cout<<minChar(s);
    return 0;
}
int minChar(string str){
    int len=str.size();
    string revStr=str;
    reverse(revStr.begin(),revStr.end());
    str=str+'$'+revStr;
    vector<int>lps(str.size(),0);
    int pref=0, suff=1;
    while(suff<str.size()){
        if(str[pref]==str[suff]){
            lps[suff]=pref+1;pref++;
            suff++;
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
    return len-lps[lps.size()-1];

}