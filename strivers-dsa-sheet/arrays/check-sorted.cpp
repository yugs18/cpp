/* Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False. */
#include <iostream>
#include <vector>
using namespace std;

bool sorted(vector<int> arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 5, 6};
    int n = arr.size();

    cout << (sorted(arr, n) ? "True" : "False") << endl;
    return 0;
}