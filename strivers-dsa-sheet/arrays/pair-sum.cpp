/* 
Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> pair_sum(int n, vector<int> arr, int target) {
    int i = 0;
    unordered_map<int, int> num;
    while (i < n) {
        int rem = target - arr[i];
        auto it = num.find(rem);
        if (it != num.end()) return {it->second, i};
        num.insert({arr[i], i});
        i++;
    }

    return {-1, -1};
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> arr;
    int value;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        arr.push_back(value);
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> result = pair_sum(n, arr, target);

    if (result[0] != -1 && result[1] != -1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}