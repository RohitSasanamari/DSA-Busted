// CodeStudio - Aggressive Cows

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> arr, int mid, int cow){ 
    int cowCount = 1;
    int lastPos = arr[0];
    int temp = 0;
    for(int i=0; i<arr.size(); i++){
        temp = arr[i] - lastPos;
        temp = abs(temp);
        if(temp >= mid){
            cowCount++;
            if(cowCount == cow)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}
 
int aggressiveCows(vector<int> arr, int cow){
    sort(arr.begin(), arr.end()); // 1,2,3,4,6
    int start = 0;
    int maxVal = -1;
    for(int i=0; i<arr.size(); i++)
        maxVal = max(maxVal,arr[i]);
    int end = maxVal;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(isPossible(arr,mid,cow)){
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    vector<int> arr = {4,2,1,3,6};
    int cow = 2;
    int ans = aggressiveCows(arr,cow);
    cout << ans;
    return 0;
}