/* You are given a strictly increasing array ‘vec’ and a positive integer 'k'. Find the 'kth' positive integer missing from 'vec'. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 7, 9, 10};
    int k = 4, n = nums.size();

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        int missing = nums[mid] - (mid + 1);
        if (missing < k) low = mid + 1;
        else high = mid - 1;
    }
    cout << low + k << endl;
    return 0;
}