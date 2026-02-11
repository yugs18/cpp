/* You are given an array. The task is to reverse the array and print it. */
#include <iostream>
using namespace std;

int reverse(int arr[], int i, int n) {
    if (i >= n)
        return 0;
    
    swap(arr[i], arr[n]);
    return reverse(arr, i + 1, n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Reversed array: ";
    int i = 0;
    reverse(arr, i, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}