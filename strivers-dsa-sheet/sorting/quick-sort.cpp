/* Given an array of n integers, sort the array using the Quicksort method. */
#include <iostream>
using namespace std;

void quicksort(int *arr, int left, int right) {
    if (left >= right) return;

    int pivot = arr[right];
    int j = left - 1;

    for (int i = left; i < right; i++) {
        if (arr[i] < pivot) {
            j++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[j + 1], arr[right]);
    int pivotindex = j + 1;

    quicksort(arr, left, pivotindex - 1);
    quicksort(arr, pivotindex + 1, right);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}