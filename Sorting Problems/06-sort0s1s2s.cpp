// Program to sort 0s, 1s and 2s in an array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void doSort(int *arr, int size){
    int low = 0;
    int mid = 0;
    int high = size-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[6] = {2,1,2,0,1,0}; // Output should be 0,0,1,1,2,2
    int size = sizeof(arr)/sizeof(int);
    doSort(arr,size);
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    return 0;
}