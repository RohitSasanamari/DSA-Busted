// Program to implement linear search.

#include<iostream>
#include<vector>
using namespace std;
 
int linearSearch(int *arr, int arrSize, int key){
    for(int i=0; i<arrSize; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[8] = {7,2,9,1,0,8,3,5};
    int arrSize = sizeof(arr)/sizeof(int);
    int key = 3;
    int ans = linearSearch(arr,arrSize,key);
    cout << "Key = " << key << endl;
    if(ans != -1)
        cout << key << " found at index " << ans << endl;
    else    
        cout << key << " not found" << endl;
    return 0;
}