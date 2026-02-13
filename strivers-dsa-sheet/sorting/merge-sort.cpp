/* Given an array of size n, sort the array using Merge Sort. */
#include <iostream>
using namespace std;

void merge(int *arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int temparr1[n1], temparr2[n2];

    for (int i = 0; i < n1; i++)
        temparr1[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        temparr2[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (temparr1[i] <= temparr2[j]) {
            arr[k] = temparr1[i];
            i++;
        }
        else {
            arr[k] = temparr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = temparr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = temparr2[j];
        j++;
        k++;
    }
}

void mergesort(int *arr, int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}