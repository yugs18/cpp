/* Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 0, 2, 2, 0, 0, 1, 1, 0};
    int n = arr.size();

    int low = 0, mid = 0,  high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            continue;
        }
        if (arr[mid] == 1) {
            mid++;
            continue;
        }
        if (arr[mid] == 2) {
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for (auto i : arr) cout << i;
    cout << endl;

    return 0;
}