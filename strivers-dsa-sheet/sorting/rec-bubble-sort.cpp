/* Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm. */
#include <iostream>
using namespace std;

void bubblesort(int *arr, int n) {
    if (n <= 1)
        return;
    
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    
    bubblesort(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubblesort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}