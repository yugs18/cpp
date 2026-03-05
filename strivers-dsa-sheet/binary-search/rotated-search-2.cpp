/* Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 0, 1, 1, 1};
    int k = 0;
    int n = nums.size();

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k) {
            cout << "True" << endl;
            return 0;
        }
        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low++;
            high--;
        } else if (nums[low] <= nums[mid]) {
            if (nums[low] <= k && k < nums[mid]) high = mid - 1;
            else low = mid + 1;
        } else {
            if (nums[mid] < k && k <= nums[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    cout << "False" << endl;
    return 0;
}