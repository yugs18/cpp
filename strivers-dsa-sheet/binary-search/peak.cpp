/* Given an array of length N, peak element is defined as the element greater than both of its neighbors. Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i]. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,5,1};
    int n = nums.size();

    if (n == 1) { 
        cout << n - 1 << endl;
        return 0;
    }
    if (nums[0] > nums[1]) {
        cout << 0 << endl;
        return 0;
    }
    if (nums[n - 1] > nums[n - 2]) {
        cout << n - 1 << endl;
        return 0;
    }

    int low = 1, high = n - 2, mid;
    while (low < high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] > nums[mid + 1]) high = mid;
        else low = mid + 1;
    }
    cout << low << endl;
    return 0;
}