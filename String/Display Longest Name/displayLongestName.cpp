#include<bits/stdc++.h>
using namespace std;
string longest(int n, vector<string> &names);
int main(){
    vector<string> names = { "Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks" };
    int n=names.size();
    cout<<longest(n,names);
    return 0;
}
string longest(int n, vector<string> &names){
    int max=INT_MIN;
    int index=0;
    for(int i=0; i<n; i++){
        int maxi=names[i].size();
        if(maxi>max){
            max=maxi;
            index=i;
        }
    }
    return names[index];
}