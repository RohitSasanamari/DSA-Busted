// Program to find an element in a rotated sorted array

#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] >= arr[0])
            start = mid+1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return arr[start];
}

int findElement(vector<int> &arr, int start, int end, int key){
    int mid = start + (end - start) / 2;
    while(start <= end){
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
    vector<int> arr = {8,9,2,4,5,6,7};
    int n = arr.size();
    int key = 7;
    int pivot = findPivot(arr);
    if(key >= pivot && key <= arr[arr.size()-1]){
        cout << "The index of key is " << findElement(arr,pivot,arr.size()-1,key);
    }
    else
        cout << "The index of key is " << findElement(arr,0,pivot-1,key);
    return 0;
}