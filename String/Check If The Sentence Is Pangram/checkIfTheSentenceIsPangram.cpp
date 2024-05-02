#include<bits/stdc++.h>
using namespace std;
bool checkIfPangram(string sentence);
int main()
{   
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    cout<<checkIfPangram(sentence);
    return 0;
    
} 
bool checkIfPangram(string sentence){
    int panagram[26]={0};
    for(int i=0; i<sentence.size(); i++)
        panagram[sentence[i] - 'a']++;
    for(int i=0; i<26; i++)
        if(panagram[i]==0)
            return false;
    return true;
}