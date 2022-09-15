// Move all the zeros in the array to right side

#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int> &arr){
    int j = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {1,0,3,0,5,9}; // Output should be 1,3,9,5,0,0
    moveZeros(arr);
    for(auto i:arr)
        cout << i << " ";
    return 0;
}