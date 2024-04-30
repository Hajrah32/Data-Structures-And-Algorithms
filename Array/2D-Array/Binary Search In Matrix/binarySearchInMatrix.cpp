#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int matrix[][5], int row, int col, int target);
int main()
{   
    int target;
    cout<<"Enter an element to search: ";
    cin>>target;
    int matrix[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,380}; 
    cout<<binarySearch(matrix,4,5,target);   
    return 0;
    
} 
bool binarySearch(int matrix[][5], int row, int col, int target){
    int start=0, end=(row*col)-1;
    while(start<=end){
        int mid=start + ((end-start)/2);
        int rowInd=mid/col;
        int colInd=mid%col;
        if(matrix[rowInd][colInd]==target)
            return 1;
        else if(matrix[rowInd][colInd]<target)
            start=mid+1;
        else    
            end=mid-1;
    }
    return 0;
}