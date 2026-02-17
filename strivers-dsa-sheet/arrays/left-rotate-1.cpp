/* Given an integer array nums, rotate the array to the left by one. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    cout << "Rotated: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}