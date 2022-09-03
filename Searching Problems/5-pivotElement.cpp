// Program to find pivot (minimum) element in rotated sorted array in O(logn) complexity.

#include<iostream>
#include<vector>
using namespace std;
 
int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] >= arr[0])
            start = mid+1;
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    if(arr[start] < arr[0]) 
        return arr[start];
    return arr[0];
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};    
    int ans = findPivot(arr);
    cout << "Pivot element is " << ans; 
    return 0;
}