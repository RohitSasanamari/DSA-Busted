//Rotate array to the left by k steps, where k is non-negative

#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k){
    vector<int> newArr;
    for(int i=k; i<arr.size(); i++)
        newArr.push_back(arr[i]);
    for(int i=0;i<k; i++)
        newArr.push_back(arr[i]);
    return newArr;
}
 
int main() {
    vector<int> arr = {7,5,2,11,2,43,1,1}; //Output should be 2,11,2,43,1,1,7,5
    int k = 2;
    vector<int> resultArr = rotateArray(arr,k);
    for(auto i:resultArr)
        cout << i << " ";
    return 0;
}