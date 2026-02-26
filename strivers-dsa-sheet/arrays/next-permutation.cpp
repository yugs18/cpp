/*
Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> next(vector<int> arr, int n) {
    int break_point = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            break_point = i;
            break;
        }
        else if (arr[i] == arr[i + 1]) continue;
    }
    if (break_point == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    int next_great = arr[break_point + 1], in = break_point + 1;
    for (int i = break_point + 2; i < n; i++) {
        if (next_great >= arr[i] && arr[i] > arr[break_point]) {
            next_great = arr[i];
            in = i;
        }
    }
    swap(arr[in], arr[break_point]);
    reverse(arr.begin() + break_point + 1, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {2, 3, 1, 3, 3};
    int n = arr.size();

    arr = next(arr, n);
    for (auto i : arr) cout << i << " ";
    cout << endl;

    return 0;
}