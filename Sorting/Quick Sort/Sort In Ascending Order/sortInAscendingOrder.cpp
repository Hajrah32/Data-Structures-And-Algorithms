#include<iostream>
using namespace std;
int sorting(int arr[], int start, int end);
void quickSort(int arr[],int start, int end);
int main(){
    //int arr[]={1, 5, 4, 8, 10, 2, 6, 9, 12, 11, 3, 7};
    //int arr[]={2, 4, 1, 3, 5};
    //int arr[]={2, 3, 4, 5, 6};
    int arr[]={3,7,10,14,18,19,2,11,16,17,23,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
int sorting(int arr[], int start, int end){
    int before=start, after=start;    
    while(after<=end){
        if(arr[after]<=arr[end]){
            swap(arr[before],arr[after]);
            before++;
        }
        after++;
    }
    return before-1;
}
void quickSort(int arr[],int start, int end){
    if(start>=end){
        return;
    }
    int pivot=sorting(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
    
}

/*
In sorting an array in ascending order using quick sort, the steps to follow are: 
1. Select a pivot (in my case, I am selecteing the end element as pivot). 
2. Find the correct position of pivot and ensure that all of the left side elements of pivot are smaller or equal to it and all of the right side elements are greater than it.
3. Divide the array in two arrays: 
    a. Left array containing all elements smaller than pivot. 
    b. Right array containing all elements greater than pivot.
4. Repeat the process

Time and Space Complexity:
-> Average case time cpmlexity: nlogn
-> Average case space cpmlexity: logn
-> Worst case time cpmlexity: n^2
-> Worst case space cpmlexity: n


*/
