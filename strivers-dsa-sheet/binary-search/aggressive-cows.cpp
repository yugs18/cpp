/* 
You are given an array 'arr' of size 'n' which denotes the position of stalls. You are also given an integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible. Find the maximum possible minimum distance.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> stalls = {4, 2, 1, 3, 6};
    int k = 2, n = stalls.size();

    sort(stalls.begin(), stalls.end());
    
    int low = 1, high = stalls[n - 1] - stalls[0], mid;
    while (low <= high) {
        mid = low + ((high - low) / 2);
        int placed = stalls[0], c = 1;
        for (int i = 1; i < n; i++) {
            if (stalls[i] - placed >= mid) {
                c++;
                placed = stalls[i];
            }
            if (c >= k) break;
        }
        if (c >= k) low = mid + 1;
        else high = mid - 1;
    }
    cout << high << endl;
    return 0;
}