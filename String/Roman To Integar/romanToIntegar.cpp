#include<bits/stdc++.h>
using namespace std;
int conversion(string roman);
int romanToInt(string s);
int main()
{   
    string roman;
    cout<<"Enter a Roman Number: ";
    cin>>roman;
    cout<<romanToInt(roman);
    return 0;
    
} 
int conversion(char roman){
        if(roman=='I')
            return (1);
        if(roman=='V')
            return (5);
        if(roman=='X')
            return (10);
        if(roman=='L')
            return (50);
        if(roman=='C')
            return (100);
        if(roman=='D')
            return (500);
        if(roman='M')
            return (1000);
    
}
int romanToInt(string s){
    int sum=0;
    for(int i=0; i<s.length()-1; i++){
        if(conversion(s[i]) < conversion(s[i+1]))
            sum -= conversion(s[i]);
        else    
            sum += conversion(s[i]);
    }
    
    sum += conversion(s[s.size()-1]);
    return sum;
}