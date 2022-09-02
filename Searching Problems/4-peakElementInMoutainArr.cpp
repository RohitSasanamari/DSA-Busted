// Finding peak element in a mountain array.

#include<iostream>
#include<vector>
using namespace std;

int findPeak(int *arr, int arrSize){
    int start = 0;
    int end = arrSize-1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] < arr[mid+1])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start)/2;
    }
    return arr[end];
}
 
int main() {
    int arr[4] = {0,2,1,0};
    int arrSize = sizeof(arr)/sizeof(int);
    int ans =  findPeak(arr,arrSize);
    cout << ans;
    return 0;
}