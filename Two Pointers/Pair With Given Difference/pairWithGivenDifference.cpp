#include<bits/stdc++.h>
using namespace std;
bool pairDifference(vector<int>pair, int n, int target);
int main(){
    vector<int>pair={5,10,3,2,50,80};
    int n=pair.size();
    int target;
    cout<<"Enter Differnce: ";
    cin>>target;
    if (target<0){
        target*=-1;
    }
    cout<<pairDifference(pair,n,target);
    return 0;
}
bool pairDifference(vector<int>pair, int n, int target){
    int start=0, end=1;
    sort(pair.begin(),pair.end());
    while(end<n){
        int diff=pair[end]-pair[start];
        if(diff==target){
            return 1;
        }
        else if(diff < target){
            end++;
        }
        else{
            start++;
        }
        if(start==end){
            end++;
        }
    }
    return 0;
}