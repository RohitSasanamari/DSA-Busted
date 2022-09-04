// Finding square root a number using binary search.

#include<iostream>
#include<vector>
using namespace std;

int findSqrt(long long int num){
    int start = 0;
    unsigned int end = num; // The range of unsigned int is bigger than that of signed int.
    long long int ans = -1;
    long long int mid = start + (end - start) / 2;
    while(start <= end){
        long long int sqaure = mid * mid;
        if(sqaure == num)
            return mid;
        else if (sqaure > num)
            end = mid - 1;
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() { 
    long long int num = 10000; // Ans = 100
    cout << findSqrt(num);
    return 0;
}