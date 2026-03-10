/*
Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> s = {"flower", "flow", "flight"};
    int n = s.size();

    string prefix = s[0];
    int j;
    for (int i = 1; i < n; i++) {
        for (j = 0; j < min(prefix.length(), s[i].length()); j++) {
            if (prefix[j] == s[i][j]) j++;
            else break;
        }
        prefix = prefix.substr(0, j);
    }

    cout << prefix << endl;
    return 0;
}