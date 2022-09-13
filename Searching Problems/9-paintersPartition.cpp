// CodeStudio - Painter's Partition Problem

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int mid, int painter){
    int painterCount = 1;
    int painterSum = 0;
    for(int i=0; i<arr.size(); i++){
        if(painterSum + arr[i] <= mid)
            painterSum += arr[i];
        else{
            painterCount++;
            if(painterCount > painter || arr[i] > mid)
                return false;
            else
                painterSum = arr[i];
        }
    }
    return true;
}

int painterPartition(vector<int> arr, int painter){
    int start = 0;
    int sum = 0;
    for(auto i: arr)
        sum += i;
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end){
        if(isPossible(arr,mid,painter)){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    vector<int> arr = {2,1,5,6,2,3}; // Ans = 11;
    int painters = 2;
    cout << painterPartition(arr,painters);
    return 0;
}