#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s){
    stack<char>str;
    int i=0;
    while(i<s.size()){
        str.push(s[i]);
        i++;
    }
    i=0;
    while(!str.empty()){
        s[i]=str.top();
        str.pop();
        i++;
    }
}
int main(){
    vector<char>s={'h','e','l','l','o'};
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    reverseString(s);
    cout<<endl;
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    return 0;
}
