/*
Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "ab", t = "aa";
    int n = s.length();
    int x[256] = {0}, y[256] = {0};

    if (n != t.length()) return 0;

    for (int i = 0; i < n; i++) {
        if (x[s[i]] != y[t[i]]) {
            cout << "not isomorphic" << endl;
            return 0;
        }
        x[s[i]] = i + 1;
        y[t[i]] = i + 1;
    }
    cout << "Iso" << endl;
    return 0;
}