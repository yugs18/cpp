/*
Given two strings, check if two strings are anagrams of each other or not.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string a = "CAT", b = "ACT";
    if (a.length() != b.length()) return 0;

    vector<int> freq(26, 0);
    for (int i = 0; i < a.length(); i++)
        freq[a[i] - 'A']++;
    for (int i = 0; i < b.length(); i++)
        freq[b[i] - 'A']--;

    if (all_of(freq.begin(), freq.end(), [](int i){ return i == 0; }))
        cout << "true" << endl;
    else 
        cout << "false" << endl;

    return 0;
}