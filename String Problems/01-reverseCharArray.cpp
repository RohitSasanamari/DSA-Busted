//Program to reverse a given char array

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char> &s, int length){
    int start = 0;
    int end = length - 1;
    while (start < end){
        swap(s[start++], s[end--]);
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'}; // hello -> olleh
    int length = 0;
    for(int i=0; s[i]!= '\0'; i++){
        length++;
    }
    reverse(s,length);
    for(int i=0; s[i] != '\0'; i++){
        cout << s[i];
    }
    return 0;
}