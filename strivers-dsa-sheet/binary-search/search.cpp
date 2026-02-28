/* You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = nums.size();
    int k = 44;

    int low = 0, high = n - 1, mid, f = 0;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k) {
            cout << "okay" << endl;
            return;
        }
        if (k < nums[mid])
            high = mid - 1;
        else 
            low = mid + 1;
    }

    cout << "Not okay" << endl;

    return 0;
}