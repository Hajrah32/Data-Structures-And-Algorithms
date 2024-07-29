#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    for(int i=0; i<5; i++){
        q.push(i+1);
    }
    int s=q.size();
    for(int i=0; i<s; i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        
    }
    return 0;
}
