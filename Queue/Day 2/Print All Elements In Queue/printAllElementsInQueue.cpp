#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    for(int i=0; i<5; i++){
        q.push(i+1);
    }
    vector<int>vect(q.size());
    while(!q.empty()){
        cout<<q.front()<<" ";
        vect.push_back(q.front());
        q.pop();
    }
    for(int i=0; i<vect.size(); i++){
        q.push(vect[i]);
    }
    return 0;
}
