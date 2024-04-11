#include<iostream>
using namespace std;
int searchSQRT(int num);
int main(){
    int num;
    cout<<"Enter a Number to Find its Squre Root: ";
    cin>>num;
    int sqrt=searchSQRT(num);
    cout<<"Squre Root of "<<num<<" : "<<sqrt;
    return 0;
}
int searchSQRT(int num){
    int start=0, end=num;
    int sqrt;
    if(num<2){
        return num;
    }
    else{
        while(start<=end){
            int mid=start + ((end-start)/2);
            //((mid*mid)==num) giving overflow issue with this condition
            if(mid==(num/mid)){
                return mid;
            }
            else if(mid>(num/mid)){
                end=mid-1;
            }
            else{
                sqrt=mid;
                start=mid+1;
            }
        }
        return sqrt;
    }
}