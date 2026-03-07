/*
You are given 'N’ roses and you are also given an array 'arr' where 'arr[i]' denotes that the 'ith' rose will bloom on the 'arr[i]th' day. You can only pick already bloomed roses that are adjacent to make a bouquet. You are also told that you require exactly 'k' adjacent bloomed roses to make a single bouquet. Find the minimum number of days required to make at least ‘m' bouquets each containing 'k' roses. Return -1 if it is not possible.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> bloom = {7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2, k = 3;
    int n = bloom.size();

    if (n < m * k) {
        cout << -1 << endl;
        return 0;
    }

    int high = *max_element(bloom.begin(), bloom.end());
    int low = *min_element(bloom.begin(), bloom.end());
    int mid;

    while (low < high) {
        mid = low + ((high - low) / 2);
        int c = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (bloom[i] <= mid) {
                c++;
                if (c == k) {
                    b++;
                    c = 0;
                }
            } else c = 0;
        }

        if (b >= m) high = mid; 
        else low = mid + 1;
    }
    cout << high << endl;
    return 0;
}