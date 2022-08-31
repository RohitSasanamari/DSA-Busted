//Find duplicate elements in array 
//Codestudio Problem - 442

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findDuplicate(vector<int> arr){
    sort(arr.begin(), arr.end()); // 1,2,2,2,3,3,4
    int temp = 0;
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] == arr[i+1]){
            if(arr[i] != temp){
                cout << arr[i] << " ";
                temp = arr[i];
            }
        }
    }
}
 
int main() {
    vector<int> arr = {3,1,3,4,2,2,2,3};
    findDuplicate(arr);
    return 0;
}