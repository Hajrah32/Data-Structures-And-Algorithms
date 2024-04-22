#include<bits/stdc++.h>
using namespace std;
bool threeSum(vector<int>vect, int target);
int main(){
    //vector<int> vect={2,7,11,15,27};
    //vector<int> vect={1,2,4,6,18,25};
    vector<int> vect={1,4,45,6,10,8};
    int target;
    cout<<"Enter Sum: ";
    cin>>target;
    cout<<threeSum(vect,target);
    return 0;
}
bool threeSum(vector<int>vect, int target){
    int n=vect.size();
    sort(vect.begin(),vect.end());
    for(int i=0; i< n-2; i++){
        int find=target-vect[i];
        int start=i+1, end=n-1;
        while(start<end){
            int sum=vect[start]+vect[end];
            if(sum==find){
                return 1;
            }
            else if(sum>find){
                end--;
            }
            else{
                start++;
            }
        }
    }
    return 0;
}