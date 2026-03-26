/*
Given a string s, return the longest palindromic substring in s
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "babad";
    int n = s.length();

    int maxlen = 0, start = 0;
    for (int i = 0; i < n; i++) {
        int left = i, right = i; 
        
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        if ((right - left - 1) > maxlen) {
            maxlen = right - left - 1;
            start = left + 1;
        }

        left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }

        if ((right - left - 1) > maxlen) {
            maxlen = right - left - 1;
            start = left + 1;
        }
    }
    cout << s.substr(start, maxlen) << endl;
    return 0;
}