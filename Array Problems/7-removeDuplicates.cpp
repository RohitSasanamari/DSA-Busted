//Removing a duplicate value from array using two techniques.

#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
 
void removeDuplicatesUsingSet(vector<int> &arr){
    set<int> unique;
    for(int i=0; i<arr.size(); i++)
        unique.insert(arr[i]);
    for(auto i=unique.begin(); i!=unique.end(); i++)
        cout << *i << " ";
}

void removeDuplicates(vector<int> &arr){
    sort(arr.begin(),arr.end()); // 0 1 1 1 2 4 6 6 8 9 9
    for(int i=0; i<arr.size()-1;i++){
        if(arr[i] == arr[i+1] || arr[i] == arr[i-1])
            arr.erase(arr.begin()+i);
    }
    for(auto i:arr)
        cout << i << " ";
}

int main() {
    vector<int> arr = {6,2,9,6,4,0,1,9,8,1,1}; //Output should be 0 1 2 4 6 8 9 
    removeDuplicatesUsingSet(arr); // This is using Set. This is particulary easy.
    cout << endl;
    removeDuplicates(arr); //This is using in-built array methods. 
    return 0;
}