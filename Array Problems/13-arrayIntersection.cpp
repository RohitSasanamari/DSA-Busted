// Program to find array intersection between two elements.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void arrIntersection(int *arr1, int *arr2, int size1, int size2){
    sort(arr1,arr1+size1); //1,2,3,4,5
    sort(arr2,arr2+size2); //1,2,4,5,6
    int i=0;
    int j=0;
    while(i < size1 && j < size2){
        if(arr1[i] > arr2[j])
            j++;
        else if (arr2[j] > arr1[i])
            i++;
        else{
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
}
 
int main() {
    int arr1[5] = {4,2,5,3,1};
    int arr2[5] = {2,4,6,5,1};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    arrIntersection(arr1,arr2,size1,size2);
    return 0;
}
