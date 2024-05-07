#include<iostream>
using namespace std;
void displayBDay(int n);
int main(){
   int n;
   cout<<"Enter Count Number: ";
   cin>>n;
   displayBDay(n);
    return 0;
}
void displayBDay(int n){
    if(n==0){
        cout<<"Happy Birthday!";
        return;
    }
    cout<<n<<" days left!"<<endl;
    displayBDay(n-1);
}