// Finding sum of all the array elements.

#include<iostream>
#include<vector>
using namespace std;
 
int findSum(int *arr, int size){
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    return sum; 
}

int main() {
    int arr[5] = {5,2,4,9,-1};
    int arrSize = sizeof(arr)/sizeof(int);
    cout << "The sum is " << findSum(arr,arrSize);
    return 0;
}