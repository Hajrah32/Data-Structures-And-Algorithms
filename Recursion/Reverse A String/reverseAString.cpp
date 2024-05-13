#include<bits/stdc++.h>
using namespace std;
void reverseString(string& str, int start, int end);
int main(){
    string str="abBass";
    //string str="mom";
    //string str="mama";
    reverseString(str,0,str.length()-1); 
    cout<<str;
    return 0;
}
void reverseString(string& str, int start, int end){
   if(start>=end){
        return ;
   }
    swap(str[start],str[end]);
    reverseString(str, start+1, end-1);
}
/*
Reverse a given string using the concept of recursion. 
For example, string='Hajra
*/