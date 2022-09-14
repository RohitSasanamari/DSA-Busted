// Program to implement Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

void insertionSortUsingFor(int *arr, int arrSize){
    for(int i=1; i<arrSize; i++){
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(temp < arr[j])
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
    }
}

void insertionSortUsingWhile(int *arr, int arrSize){
    int i = 1;
    int j = 0;
    while(i < arrSize) {
        int temp = arr[i];
        j = i-1;
        while(j >= 0) {
            if(temp < arr[j])
                arr[j+1] = arr[j];
            else
                break;
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
}

int main() {
    int arr[7] = {10,1,7,4,8,2,11};
    int arrSize = sizeof(arr)/sizeof(int);
    insertionSortUsingFor(arr,arrSize);
    cout << "Sorted Array using For.." << endl;
    for(int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    cout << endl;
    insertionSortUsingWhile(arr,arrSize);
    cout << "Sorted Array using While.." << endl;
    for(int i=0; i<arrSize; i++)
        cout << arr[i] << " ";
    return 0;    
}