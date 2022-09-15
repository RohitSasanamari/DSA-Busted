//Rotate array to the left by k steps, where k is non-negative

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void rotateArray(vector<int> &arr, int k){
    vector<int> ans(arr.size());
    int temp = 0;
    for(int i=0;i<arr.size(); i++){
        temp = (i+k)%arr.size();
        ans[temp] = arr[i];
    }
    arr = ans;
}
 
int main() {
    vector<int> arr = {1,2,3,4,5,6,7}; //Output should be 5,6,7,1,2,3,4
    int k = 3;
    rotateArray(arr,k);
    for(auto i:arr)
        cout << i << " ";
    return 0;
}