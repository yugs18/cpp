/*
Roman numerals are represented by seven different symbols: I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
For example: 2 is written as II, 12 is written as XII, 27 is written as XXVII.
Roman numerals are usually written largest to smallest from left to right. But in six special cases, subtraction is used instead of addition:
I before V or X → 4 and 9,
X before L or C → 40 and 90,
C before D or M → 400 and 900
Given a Roman numeral, convert it to an integer.
*/
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "MCMXCIV";
    int n = s.length();

    unordered_map<char, int> roman_to_integer= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        auto it1 = roman_to_integer.find(s[i]);
        auto it2 = roman_to_integer.find(s[i + 1]);
        if (it1 == roman_to_integer.end() || it2 == roman_to_integer.end()) {
            cout << "Not a roman number" << endl;
            return 0;
        }

        if (it1->second <  it2->second) sum -= it1->second;
        if (it1->second >=  it2->second) sum += it1->second;
    }

    auto last = roman_to_integer.find(s[n - 1]);
    sum += last->second;

    cout << sum << endl;
    return 0;
}