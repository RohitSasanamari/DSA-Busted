// Program to reverse the given array

#include<iostream>
#include<vector>
using namespace std;
 
void reverseArray(int *arr, int arrSize){
    int firstPos = 0;
    int lastPos = arrSize-1;
    while(firstPos <= lastPos)
        swap(arr[firstPos++],arr[lastPos--]);
}

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,arrSize);
    for(int i=0; i<arrSize; i++){
        cout << arr[i] << " ";
    }
    return 0;
}