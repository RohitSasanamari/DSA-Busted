// Program to find maximum and minimum element in array.

#include<iostream>
#include<vector>
using namespace std;
 
void findMaxMin(int *arr, int size){
    int maxValue = INT16_MIN;
    int minValue = INT16_MAX;
    for(int i=1; i<size; i++){
        if(arr[i] > maxValue)
            maxValue = arr[i];
        if(arr[i] < minValue)
            minValue = arr[i];        
    }
    cout << "Maximum element= " << maxValue << endl;
    cout << "Minimum element= " << minValue << endl;
    arr[0] = 90;
}

int main() {
    int arr[9] = {5,2,-8,1,22,3,9,6,0};
    int arrSize = sizeof(arr)/sizeof(int);
    findMaxMin(arr,arrSize);
    return 0;
}