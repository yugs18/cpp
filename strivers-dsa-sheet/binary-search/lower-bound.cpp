/* Given a sorted array of N integers and an integer x, write a program to find the lower bound of x. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 9};
    int n = nums.size();
    int k = 6;

    int mid, low = 0, high = n - 1, pos = n;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] >= k) {
            if (pos > mid) pos = mid;
        }
        if (nums[mid] >= k) high = mid - 1;
        else low = mid + 1;
    }
    cout << pos << endl;
    return 0;
}