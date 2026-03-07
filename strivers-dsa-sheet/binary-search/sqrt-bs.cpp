/* You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n). */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 28;

    int low = 0, high = n, mid, num;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (mid * mid <= n) {
            num = mid;
            low = mid + 1;
        } else high = mid - 1;
    }
    cout << num << endl;
    return 0;
}