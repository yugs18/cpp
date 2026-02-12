/* Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (nums[j - 1] > nums[j])
                swap(nums[j - 1], nums[j]); 
        }
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}