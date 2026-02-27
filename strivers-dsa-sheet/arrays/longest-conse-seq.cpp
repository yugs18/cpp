/*
Given an array nums of n integers.

Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int n = nums.size();

    unordered_set<int> s(nums.begin(), nums.end());
    int count, max = 0, num;
    for (int i : s) {
        auto it = s.find(i - 1);
        if (it == s.end()) {
            count = 1;
            num = i;
            while(s.find(num + count) != s.end()) count++;
            if (count > max) max = count;
        }
    }
    cout << max << endl;
    return 0;
}