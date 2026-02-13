/* Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm. */
#include <iostream>
using namespace std;

void insertionsort(int *arr, int n, int i) {
    if (i == n) return;

    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertionsort(arr, n, i + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionsort(arr, n, 0);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}