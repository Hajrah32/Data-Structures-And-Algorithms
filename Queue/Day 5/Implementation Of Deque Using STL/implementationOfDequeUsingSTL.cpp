#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_front(5);
    dq.push_front(4);
    dq.push_back(3);
    dq.push_back(2);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    return 0;
}
