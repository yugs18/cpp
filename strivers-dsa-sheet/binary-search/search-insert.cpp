/* You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 4, 5, 7};
    int n = nums.size();
    int k = 6;

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k) {
            cout << mid << endl;
            return 0;
        }
        if (k < nums[mid]) high = mid - 1;
        else low = mid + 1;
    }
    cout << low << endl;
    return 0;
}