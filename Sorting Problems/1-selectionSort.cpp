// Program to implement Selection Sort

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int *arr, int arrSize){
    for(int i=0; i<arrSize-1; i++){
        int currElement = i;
        for(int j=i+1; j<arrSize; j++){
            if(arr[j] < arr[currElement])
                currElement = j;
        }
        swap(arr[currElement], arr[i]);
    }
}
 
int main() {
    int arr[5] = {65,11,9,23,75}; // O/P = 9,11,23,65,75
    int arrSize = sizeof(arr)/sizeof(int);
    selectionSort(arr,arrSize);
    cout << "Sorted Array.." << endl;
    for(int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    return 0;
}