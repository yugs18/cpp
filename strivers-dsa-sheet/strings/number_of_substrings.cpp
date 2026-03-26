/*
You are given a string s and a positive integer k.
Return the number of substrings that contain exactly k distinct characters.
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int amd(string s, int k) {
    int left = 0, right = 0;
    int total = 0;
    int n = s.length();

    unordered_map<char, int> freq;
    int dis = 0;
    while (right < n) {
        if (freq[s[right]]++ == 0) dis++;

        while (dis > k) {
            if (--freq[s[left]] == 0) {
                dis--;
                freq.erase(s[left]);
            }
            left++;
        }

        total += right - left + 1;
        right++;
    }
    return total;
}

int main() {
    string s = "abcbaa";
    int k = 3;

    int r1 = amd(s, k);
    int r2 = amd(s, k - 1);

    cout << r1 << endl;
    cout << r2 << endl;

    cout << r1 - r2 << endl;
    return 0;
}