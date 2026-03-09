/*
You are given a sorted array ‘arr’ of length ‘n’, which contains positive integer positions of ‘n’ gas stations on the X-axis. You are also given an integer ‘k’. You have to place 'k' new gas stations on the X-axis. You can place them anywhere on the non-negative side of the X-axis, even on non-integer positions. Let 'dist' be the maximum value of the distance between adjacent gas stations after adding k new gas stations. Find the minimum value of ‘dist’.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    vector<int> pos = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 1, n = pos.size();

    int high = 0;
    for (int i = 0; i < n - 1; i++) high = max(high, pos[i + 1] - pos[i]);
    float low = 1e-6;

    while (high - low > 1e-6) {
        float mid = low + ((high - low) / 2.0);
        int c = 0;

        for (int i = 0; i < n - 1; i++) {
            float gap = pos[i + 1] - pos[i];
            int seg = ceil(gap / mid);
            c += (seg - 1);
        }
        if (c > k) low = mid;
        else high = mid;
    }
    cout << high << endl;
    return 0;
}