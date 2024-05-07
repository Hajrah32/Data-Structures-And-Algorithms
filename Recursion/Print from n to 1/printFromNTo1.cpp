#include<iostream>
using namespace std;
void displayNum(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   displayNum(n);
    return 0;
}
void displayNum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    displayNum(n-1);
}