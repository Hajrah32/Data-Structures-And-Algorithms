#include<iostream>
#include<vector>
using namespace std; 
int findKthPositive(vector<int>& arr, int k);
int main(){
    vector<int>arr={2,3,4,7,11};
    int k;
    cout<<"Enter a Position to Find which number is missing: ";
    cin>>k;
    cout<<" ans: "<<findKthPositive(arr,k);
    return 0;
}
int findKthPositive(vector<int>& arr, int k) {
    int end=arr.size()-1;
    int start=0,ans=arr.size();
    while(start<=end){
        int mid=start + ((end-start)/2);
        if((arr[mid]-mid-1) >= k){
            end=mid-1;
            ans=mid;
            cout<<"a:"<<ans<<" ";
            
            
        }
        else{
            start=mid+1;
        }
        
    }
     return ans+k;     
}