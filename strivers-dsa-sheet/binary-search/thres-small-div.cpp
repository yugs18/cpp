/*
You are given an array of integers 'arr' and an integer i.e. a threshold value 'limit'. Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold value.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit = 8, n = nums.size();

    int low = 1, high = *max_element(nums.begin(), nums.end()), mid;
    while (low < high) {
        mid = low + ((high - low) / 2);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ((nums[i] + mid - 1) / mid);
        }
        if (sum <= limit) high = mid;
        else low = mid + 1;
    }
    cout << high << endl;
    return 0;
}