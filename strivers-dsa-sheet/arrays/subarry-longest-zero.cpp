/* Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero. */
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    int n = arr.size();

    unordered_map<int, int> sum;
    int s = 0, longest = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i]; 

        if (!s) longest = max(longest, i + 1);
        else if (sum.find(s) != sum.end()) longest = max(longest, i - sum.find(s)->second);
        else sum.insert({s, i});
    }

    cout << longest << endl;
    return 0;
}