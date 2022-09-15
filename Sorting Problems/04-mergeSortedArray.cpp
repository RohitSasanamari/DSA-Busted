// Merge two sorted arrays into a single one

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void mergeUsingPriorityQueue(vector<int> arr1, int m, vector<int> arr2, int n){
    priority_queue<int,vector<int>, greater<int>> pq;
    for(int i=0; i<arr1.size(); i++){
        pq.push(arr1[i]);
    }
    for(int i=0; i<arr2.size(); i++){
        pq.push(arr2[i]);
    }
    arr1.clear();
    while(!pq.empty()){
        arr1.push_back(pq.top());
        pq.pop();
    }
    cout << "Using Priority Queue..." << endl;
    for(auto i:arr1)
        cout << i << " ";
}

void mergeUsingArray(vector<int> arr1, int m, vector<int> arr2, int n){
    cout << endl;
    vector<int> arr3;
    int i=0;
    int j=0;
    while(i < m && j < n){  
        if(arr1[i] <= arr2[j]) {
            arr3.push_back(arr1[i]);
            i++;
        }
        else{
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i < m){
        arr3.push_back(arr1[i]);
        i++; 
    }
    while(j < n){
        arr3.push_back(arr2[j]);
        j++;
    }
    arr1 = arr3;
    arr1.clear();   
    for(int i = 0; i<arr3.size(); i++)
        arr1.push_back(arr3[i]);
    cout << "Using Arrays..." << endl;
    for(auto i:arr1)
        cout << i << " ";
}

int main() {
    vector<int> arr1 = {1,2,3}; // 1,2,3,4,0,0,0
    vector<int> arr2 = {2,5,6};
    int m = 3;
    int n = 3;
    mergeUsingPriorityQueue(arr1,m,arr2,n); // Output = 1,2,3,4,5
    mergeUsingArray(arr1,m,arr2,n);
    return 0;
}