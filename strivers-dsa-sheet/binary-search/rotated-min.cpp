/* Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown. Find the minimum element in the array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4,5,6,7,0,1,2,};
    int n = nums.size();

    int low = 0, high = n - 1, mid, min;
    while (low < high) {
        mid = low + ((high - low) / 2);
        if (nums[high] < nums[mid]) low = mid + 1;
        else high = mid; 
    }
    cout << nums[low] << endl;
    return 0;
}