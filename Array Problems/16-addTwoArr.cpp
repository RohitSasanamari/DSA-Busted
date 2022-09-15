// Program to add elements of two array and insert the values of answer into a new array.

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> addArray(vector<int> arr1, vector<int> arr2){
    int i = arr1.size()-1;
    int j = arr2.size()-1;;
    int sum = 0;
    int carry = 0;
    vector<int> ans;
    while(i >= 0 && j >= 0){
        sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i >= 0){
        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j >= 0){
        sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    if(carry != 0)
        ans.push_back(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr1 = {9,9,9};
    vector<int> arr2 = {9,9,9};
    vector<int> ans = addArray(arr1,arr2);
    for(auto i:ans)
        cout << i << " ";
    return 0;
}