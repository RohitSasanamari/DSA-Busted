// Finding all unique value in array
// CodeStudio Problem - 325

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int findUnique(vector<int> arr){
    sort(arr.begin(), arr.end()); // 1,1,2,2,3,3,4
    if(arr[0] != arr[1])
        cout << arr[0] << " ";
    for(int i=1; i<arr.size(); i++){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1])
            cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {1,2,2,3,1,4,3};
    int ans = findUnique(arr);
    cout << endl;
    return 0;
}