/* Given an integer array nums of size n, return the majority element of the array. */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = arr.size();
    int maj = n / 2;

    int count = 0, candidate;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = arr[i];
        if (candidate == arr[i]) count++;
        else count--;
    }

    cout << "Majority element: " << candidate << endl;

    return 0;
}