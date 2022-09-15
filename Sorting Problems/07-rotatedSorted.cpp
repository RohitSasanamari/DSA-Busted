// Check if an array is sorted as well as rotated or not

#include<iostream>
#include<vector>
using namespace std;

bool checkArr(vector<int> &arr){
    int count = 0;
    int size = arr.size();
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i])
            count++;
    }
    if(arr[size-1] > arr[0])
        count++;
    return count <= 1;
}

int main() {
    vector<int> arr = {3,4,5,1,2};
    cout << checkArr(arr);
    return 0;
}