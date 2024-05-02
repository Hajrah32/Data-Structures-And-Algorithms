#include<bits/stdc++.h>
using namespace std;
bool isRotated(string str1, string str2);
int main()
{   
    //string str1 = "amazon";
    //string str2 = "azonam";
    string str1 = "geeksforgeeks";
    string str2 = "geeksgeeksfor";
    cout<<isRotated(str1,str2);
    return 0;
    
} 
bool isRotated(string str1, string str2){
    string clockWise=str1;
    string antiClockWise=str1;
    int n=str1.size();
    for(int i=0; i<n-2; i++)
        clockWise[i+2]=str1[i];
    clockWise[0]=str1[n-2];
    clockWise[1]=str1[n-1];
    if(clockWise==str2)
        return 1;
    for(int i=n-1; i>=2; i--)
        antiClockWise[i-2]=str1[i];
    antiClockWise[n-2]=str1[0];
    antiClockWise[n-1]=str1[1];
    if(antiClockWise==str2)
        return 1;
    else    
        return 0;
}