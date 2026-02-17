/* Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0. */
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = arr.size();

    map<int, int> sum;
    int longest = 0, j = 0, s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
        sum.insert({s, i});
        int rem = s - k;
        if (!rem) {
            longest = max(longest, i + 1);
        } else if (sum.find(rem) != sum.end())
            longest = max(longest, i - sum.find(rem)->second);
    }

    cout << longest << endl;
    return 0;
}