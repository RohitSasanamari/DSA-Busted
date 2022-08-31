// Replace duplicates from array and returning the size of the array of only unique elements.
// Leetcode Problem - 26
 
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int replaceDuplicates(vector<int> &arr){
    int ans = 0;
    for(int i=1; i<arr.size(); i++){
        if(arr[ans] != arr[i]){
            ans++;
            arr[ans]=arr[i];
        }
    }
    return ans+1;
}

int main() {
    vector<int> arr = {1,1,2}; 
    int ans = replaceDuplicates(arr);
    cout << ans;
    return 0;
}