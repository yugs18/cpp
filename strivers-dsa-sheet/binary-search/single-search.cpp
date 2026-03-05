/* Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = nums.size();

    if (n == 1) return nums[n - 1];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
    int low = 1, high = n - 2, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) return nums[mid];
        if (nums[mid] == nums[mid ^ 1]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}