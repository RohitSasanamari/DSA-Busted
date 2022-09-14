// Program to find first and last occurence of a given element in a sorted array.

#include<iostream>
#include<vector>
using namespace std;

int findFirstOcc(int *arr, int size, int key){
    // 0,0,1,1,2,2,2,2
    int start = 0;
    int ans = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int findLastOcc(int *arr, int size, int key){
    int start = 0;
    int ans = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int arr[8] = {0,0,1,1,2,2,2,2};
    int key = 2;
    int arrSize = sizeof(arr)/sizeof(int);
    int first = findFirstOcc(arr,arrSize,key);
    cout << "First Occurence " << first << endl;;
    int last = findLastOcc(arr,arrSize,key);
    cout << "Last Occurence " << last << endl;
    return 0;
}