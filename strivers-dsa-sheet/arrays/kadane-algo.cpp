/* Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = nums.size();

    int temp_start = 0, start = 0, end = 0, sum = nums[0], max = nums[0];
    for (int i = 1; i < n; i++) {
        sum += nums[i];
        if (sum < nums[i]) {
            sum = nums[i];
            temp_start = i;
        } 
        if (sum >= max) {
            max = sum;
            start = temp_start;
            end = i;
        }
    }

    vector<int> sub(nums.begin() + start, nums.begin() + end + 1);
    for (auto i : sub) cout << i << " ";
    cout << endl;

    return 0;
}