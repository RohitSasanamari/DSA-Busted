//  Program to implement binary search.

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int *arr, int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] == key)
            return mid;
        else if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}
 
int main() {
    int arr[8] = {3,5,9,12,16,21,28,30};
    int arrSize = sizeof(arr)/sizeof(int);
    int key = 21;
    int ans = binarySearch(arr,arrSize, key);
    cout << "Key = " << key << endl;
    if(ans != -1)
        cout << key << " found at index " << ans << endl;
    else    
        cout << key << " not found" << endl;
    return 0;
}