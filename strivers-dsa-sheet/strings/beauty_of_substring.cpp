/*
 The beauty of a string is defined as the difference between the frequency of the most frequent character and the least frequent character (excluding characters that do not appear) in that string.

Given a string s, return the sum of beauty values of all possible substrings of s.
*/
#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    string s = "aabcbaa";
    int n = s.length();

    int sum = 0;
    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0);
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++;

            int min = INT_MAX, max = INT_MIN;
            for (auto it : freq) {
                if (it < min && it != 0) min = it;
                if (it > max && it != 0) max = it;
            }
            sum += max - min;
        }
    }

    cout << sum << endl;
    return 0;
}