/* Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist. */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 6, 1, 8, 5, 7, 4, 0, 3, 1, 0, 9, 9, 9};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    cout << "Sorted: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    int ss = -1, sl = -1;

    if (n > 1) {
        int smallest = arr[0];
        int largest  = arr[n - 1];

        // second smallest
        for (int i = 1; i < n; i++) {
            if (arr[i] != smallest) {
                ss = arr[i];
                break;
            }
        }

        // second largest
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] != largest) {
                sl = arr[i];
                break;
            }
        }
    }

    cout << "Second smallest: " << ss << endl;
    cout << "Second largest: " << sl << endl;

    return 0;
}