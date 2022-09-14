// Program to implement Bubble Sort

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int *arr, int arrSize){\
    bool swapped = false;
    for(int i=0; i<arrSize-1; i++){ //
        for(int j=0; j<arrSize-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) // Optimization
            break; // If elements are already sorted then swapped will remain false 
                   // and it will break out of first loop resulting in only one pass. Best Case - O(n) | Worst Case - O(n2)
    }
}

int main() {
    int arr[5] = {65,11,9,75,23}; // O/P = 9,11,23,65,75
    int arrSize = sizeof(arr)/sizeof(int);
    bubbleSort(arr,arrSize);
    cout << "Sorted Array.." << endl;
    for(int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    return 0;
}