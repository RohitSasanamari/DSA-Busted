// Program to sort zeros and ones in array.

#include<iostream>
#include<vector>
using namespace std;

void printArray(int *arr,int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
}

void sortNow(int *arr, int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        if(arr[start] == 0)
            start++;
        else if(arr[end] == 1)
            end--;
        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
}
 
int main() {
    int arr[6] = {0,1,1,0,1,0};
    int arrSize = sizeof(arr)/sizeof(int);
    cout << "Before Sorting.." << endl;
    printArray(arr,arrSize);
    cout << endl;
    sortNow(arr,arrSize);
    cout << "After Sorting.." << endl;
    printArray(arr,arrSize);
    return 0;
}