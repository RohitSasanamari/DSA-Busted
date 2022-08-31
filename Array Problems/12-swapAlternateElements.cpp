// Program to swap alternate elements in array

#include<iostream>
#include<vector>
using namespace std;
 
void swapAlternate(int *arr, int size){
    for(int i=0; i<size; i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int arrSize = sizeof(arr)/sizeof(int);
    swapAlternate(arr,arrSize);
    for(int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    return 0;
}