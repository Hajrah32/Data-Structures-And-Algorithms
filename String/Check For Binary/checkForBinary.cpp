#include<bits/stdc++.h>
using namespace std;
bool isBinary(string str);
int main(){
    //string str="101";
    string str="75";
    cout<<isBinary(str);
    return 0;
}
bool isBinary(string str){
    int i=0;
    while(i<str.size()){
        if(str[i]=='0' || str[i]=='1')
            i++;
        else
            return 0;
    }
    return 1;
}