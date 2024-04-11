#include<iostream>
using namespace std;
int cubeRoot(int num); 
int main(){
    int num;
    cout<<"Enter number to find cube root: ";
    cin>>num;
    cout<<"Cube Root of "<<num<<" : "<<cubeRoot(num);
    return 0;
}
int cubeRoot(int num){
    int start=1;
    int end=num,cube;
    if(num<1){
        return 0;
    }
    else{
        while(start<=end){
            int mid=start + ((end-start)/2);
            if((mid*mid)==(num/mid)){
                return mid;
            }
            else if((mid*mid)<(num/mid)){
                cube=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return cube;
    }
    
}