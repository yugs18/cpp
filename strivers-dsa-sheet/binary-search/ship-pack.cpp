/*
You are the owner of a Shipment company. You use conveyor belts to ship packages from one port to another. The packages must be shipped within 'd' days. The weights of the packages are given in an array 'of weights'. The packages are loaded on the conveyor belts every day in the same order as they appear in the array. The loaded weights must not exceed the maximum weight capacity of the ship. Find out the least-weight capacity so that you can ship all the packages within 'd' days .
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> w = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5, n = w.size();

    int low = *max_element(w.begin(), w.end());
    int high = accumulate(w.begin(), w.end(), 0);
    int mid;

    while (low < high) {
        mid = low + ((high - low) / 2);
        int cap = 1, sum = 0;
        
        for (auto i : w) {
            if (sum + i <= mid) {
                sum += i;
            } else {
                cap++;
                sum = i;
            }
        }
        if (cap <= d) high = mid;
        else low = mid + 1;
    }
    cout << high << endl;
    return 0;
}