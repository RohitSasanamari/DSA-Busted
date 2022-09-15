//Given an array of integers and a position. Reverse the array after that position

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int position){
    int startPos = position;
    int endPos = arr.size()-1;
    while(startPos <= endPos){
        swap(arr[startPos],arr[endPos]);
        startPos++;
        endPos--;
    }
}
 
int main() {
    vector<int> arr = {1,2,3,4,5,6}; //Output should be 1,2,3,4,6,5
    int position = 4;
    reverseArray(arr,position);
    for(auto i:arr)
        cout << i << " ";
    return 0;
}