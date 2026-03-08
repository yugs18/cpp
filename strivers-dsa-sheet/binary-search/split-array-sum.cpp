/*
Given an integer array ‘A’ of size ‘N’ and an integer ‘K'. Split the array ‘A’ into ‘K’ non-empty subarrays such that the largest sum of any subarray is minimized. Your task is to return the minimized largest sum of the split. A subarray is a contiguous part of the array.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3, n = nums.size();

    if (n < k) {
        cout << -1 << endl;
        return 0;
    }

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int mid;

    while (low <= high) {
        mid = low + ((high - low) / 2);
        int c = 1, sum = nums[0];

        for (int i = 1; i < n; i++) {
            sum += nums[i];
            if (sum > mid) {
                c++;
                sum = nums[i];
            }
        }
        if (c > k) low = mid + 1;
        else high = mid - 1;
    }
    cout << low << endl;
    return 0;
}