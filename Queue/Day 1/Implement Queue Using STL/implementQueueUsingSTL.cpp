#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;
    for(int i=0; i<15; i++){
        q.push(i+1);
    }
    cout<<"Size of Queue: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.pop();
    
    q.push(20);

    return 0;
}
