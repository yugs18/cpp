/*  Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int n = nums.size();
    int k = 0;

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k) {
            cout << mid << endl;
            return 0;
        }
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= k && k < nums[mid]) high = mid - 1;
            else low = mid + 1;
        } else {
            if (nums[mid] < k && k <= nums[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    cout << -1 << endl;
    return 0;
}