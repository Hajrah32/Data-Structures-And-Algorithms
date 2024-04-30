#include<bits/stdc++.h>
using namespace std;
bool rowColumnWiseSearch(int matrix[][5], int row, int col, int target);
int main()
{   
    int target;
    cout<<"Enter an element to search: ";
    cin>>target;
    int matrix[5][5]={4,8,15,25,60,18,22,26,45,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170}; 
    cout<<rowColumnWiseSearch(matrix,4,5,target);
    return 0;
    
} 
bool rowColumnWiseSearch(int matrix[][5], int row, int col, int target){
    int i=0, j=col-1;
    while(i <row && j>=0){
        int current=matrix[i][j];
        if(current==target)
            return 1;
        else if(current<target)
            i++;
        else    
            j--;
    }

    return 0;
}