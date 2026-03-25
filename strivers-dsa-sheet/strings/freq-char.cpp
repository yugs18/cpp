/*
You are given a string s. Return the array of unique characters, sorted by highest to lowest occurring characters.
If two or more characters have same frequency then arrange them in alphabetic order.
*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <list>
#include <utility>
using namespace std;

int main() {
    string s = "tree";
    int n = s.length();

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        auto it = mp.find(s[i]);
        if (it != mp.end()) {
            it->second++;
        } else {
            mp.insert({s[i], 1});
        }
    }

    list<pair<char, int>> char_to_freq(mp.begin(), mp.end());

    char_to_freq.sort([](const pair<char, int>& left, const pair<char, int>& right) {
        return (left.second != right.second ? left.second > right.second : left.first < right.first);
    });

    for (auto& it : char_to_freq) {
        for (int i = 0; i < it.second; i++)
            cout << it.first << ' ';
    }

    cout << endl;
    return 0;
}