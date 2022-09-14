//Finding a missing positive in array
//Input: nums = [1,2,0]
//Output: 3
//Leetcode Problem - 41

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int findPositive(vector<int> arr)
{
    int temp = 1;
    sort(arr.begin(), arr.end());  //-1,1,3,4
    for(int i=0;i<arr.size();i++){
        if(arr[i] == temp && arr[i] > 0){
            temp++;
        }
    }
    return temp;
}

int main() {
    vector<int> arr = {1,2,0}; // Answer should be 2
    int ans = findPositive(arr);
    cout << ans;
    return 0;
}