//Return indices of two numbers such that they add up to a target
//Leetcode Problem - 1

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
vector<int> twoSum(vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    vector<int> resArr;
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        if(arr[start] + arr[end] == target){
            resArr.push_back(start);
            resArr.push_back(end);
            start++;
            end--;
        }
        else if (arr[start] + arr[end] < target){
            start++;
        }
        else
            end--;
    }
    return resArr;
}

int main() {
    vector<int> arr = {3,2,4,8}; // 2,3,4,8
    int target = 10;
    vector<int> resArr = twoSum(arr,target);
    for(auto i:resArr)
        cout << i << " "; 
    return 0;
}