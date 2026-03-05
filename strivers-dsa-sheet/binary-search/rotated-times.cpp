/* Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = nums.size();

    int low = 0, high = n - 1, mid;
    while (low < high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] > nums[high]) low = mid + 1;
        else high = mid;
    }
    if (low == 0) cout << n << endl;
    else cout << low << endl;
    return 0;
}