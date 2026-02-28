/* Given an array of integers and an integer k, return the total number of subarrays whose sum equals k. A subarray is a contiguous non-empty sequence of elements within an array. */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> nums = {1, -1, 1, -1, 1};
    int n = nums.size();
    int k = 0;

    unordered_map<int, int> freq = {{0, 1}};
    int s = 0, count = 0;
    for (int i = 0; i < n; i++) {
        s += nums[i];
        auto it = freq.find(s - k);
        if (it != freq.end()) {
            count += it->second;
        }
        if (freq.find(s) != freq.end()) freq.find(s)->second++;
        else freq.insert({s, 1});
    }
    cout << count << endl;
    return 0;
}