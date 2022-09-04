// Program to allocate the book to given students such that maximum number of pages assigned to a student is minimum.

#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<int> arr, int mid, int students){
    int pageCount = 0; //10,20,30,40
    int studentCount = 1;
    for(int i=0; i<arr.size(); i++){
        if(pageCount + arr[i] <= mid)
            pageCount = pageCount + arr[i];
        else{
            studentCount++;
            if(studentCount > students || arr[i] > mid)
                return false;
            else
                pageCount = arr[i];
        }
    }
    return true;
}

int allocateBook(vector<int> arr, int students){
    int sum = 0;
    for(auto i:arr)
        sum+=i;
    int start = 0;
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    isPossibleSolution(arr,mid,students);
    while(start <= end){
        if(isPossibleSolution(arr,mid,students)){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    vector<int> arr = {10,20,30,40};
    int students = 2;
    cout << allocateBook(arr,students);
    return 0;
}