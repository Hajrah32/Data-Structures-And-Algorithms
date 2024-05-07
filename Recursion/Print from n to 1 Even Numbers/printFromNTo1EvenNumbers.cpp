#include<iostream>
using namespace std;
void displayEvenNum(int n);
int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;
   if(n%2==1){
        n--;
   }
   displayEvenNum(n);
    return 0;
}
void displayEvenNum(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    displayEvenNum(n-2);
}