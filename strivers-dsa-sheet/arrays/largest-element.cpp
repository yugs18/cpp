/* Given an array, we have to find the largest element in the array. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {45, 3, 67, 12, 89, 3, 54, 77, 9};

    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (max < arr[i])
            max = arr[i];
    }

    cout << "Largest element: " << max << endl;
    return 0;
}