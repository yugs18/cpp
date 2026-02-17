/* Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array. */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    int n = arr.size() + 1;

    int sum = (n * (n + 1)) / 2;
    int s = accumulate(arr.begin(), arr.end(), 0);

    cout << sum - s << endl;
    return 0;
}