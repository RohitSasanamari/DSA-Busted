// Program to check is a string is a palindrome or not. Ignore special characters and consider only characters and numbers.

#include<iostream>
#include<vector>
#include <regex>
using namespace std;

bool checkPalindrome(string s){
    string tempString = s;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    int start = 0;
    int end = s.length()-1;
    while(start < end){
        if((s[start] < 'a' && (s[start] < '0' || s[start] > '9')) || isspace(s[start])){
            start++;
        }
        else if((s[end] < 'a' && (s[end] < '0' || s[end] > '9')) || isspace(s[end])){
            end--;
        }
        else if(s[start] != s[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
 
int main() {
    string s = "N2 i&nJA?a& jnI2n"; //n2 i&nja?a& jni2n
    if(checkPalindrome(s))
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    return 0;
}