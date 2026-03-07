/*
A monkey Koko is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas. An integer ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.

Each hour, the monkey chooses a non-empty pile of bananas and eats ‘k’ bananas. If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas and won’t eat any more bananas in that hour.

Find the minimum number of bananas ‘k’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    vector<int> bananas = {25, 12, 8, 14, 19};
    int h = 5, n = bananas.size();

    vector<int>::iterator max_it = max_element(bananas.begin(), bananas.end());
    int maxi = *max_it;

    int low = 1, high = maxi, mid;
    while (low < high) {
        mid = low + ((high - low) / 2);
        int hours = 0;

        for (auto i : bananas) {
            hours += ceil(static_cast<double>(i) / mid);
            if (hours > h) break;
        }

        if (hours > h) low = mid + 1;
        else high = mid;
    }
    cout << high << endl;
    return 0;
}