// Program to return true if occurences of each value in array is unique or false otherwise.
// Leetcode Problem - 1207

#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

bool findUnique(int *arr, int size){
    map<int,int> uniqueCount;
    set<int> element;
    for(int i=0; i<size; i++)
        uniqueCount[arr[i]]++;
    for(auto i:uniqueCount)
        element.insert(i.second);
    if(uniqueCount.size() == element.size())
        return true;
    else 
        return false;
}

int main() {
    int arr[10] = {-3,0,1,-3,1,1,1,-3,10,0}; // -3,-3,-3,0,0,1,1,1,1,10
    int arrSize = sizeof(arr)/sizeof(int); 
    if(findUnique(arr,arrSize))
        cout << "True";
    else
        cout << "False";
    return 0;
}