/*  ou're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1]. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 4, 5, 7, 8};
    int k = 6;

    int n = nums.size();
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k) {
            cout << nums[mid] << " " << nums[mid] << endl;
            return 0;
        }

        if (nums[mid] > k) high = mid - 1;
        else low = mid + 1;
    }

    if (high < 0) cout << " no floor" << nums[low] << endl;
    else if (low >= n) cout << nums[high] << " no ceiling" << endl; 
    else cout << nums[high] << " " << nums[low] << endl;
    return 0;
}