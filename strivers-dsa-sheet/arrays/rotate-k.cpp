/* Given an array of integers, rotating array of elements by k elements either left or right */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k;
    string str;

    cout << "K: ";
    cin >> k;
    cout << "right or left? ";
    cin >> str;

    k = k % arr.size();

    if (str == "right") {
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    }
    else {
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
    }

    cout << "Rotated: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}