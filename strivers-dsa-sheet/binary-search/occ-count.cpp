/* You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 2, 2, 3};
    int k = 2;
    int n = nums.size();

    int low = 0, high = n - 1, mid, count = 0;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] > k) high = mid - 1;
        else low = mid + 1;
    }
    int last = high;
    low = 0, high = n - 1;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] >= k) high = mid - 1;
        else low = mid + 1;
    }
    cout << last - low + 1 << endl;
    return 0;
}