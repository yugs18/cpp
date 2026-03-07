/* Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 4, m = 69;

    int low = 1, high = m, mid;
    long long res;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        res = 1;
        for (int i = 0; i < n; i++) {
            res *= mid;
            if (res > m) break;
        }

        if (res == m) {
            cout << mid << endl;
            return 0;
        }
        if (res < m) low = mid + 1;
        else high = mid - 1;
    }
    cout << -1 << endl;
    return 0;
}