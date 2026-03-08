/*
Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint. You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under the constraint that any painter will only paint the continuous sections of boards.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2, n = boards.size();

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int mid;

    while (low <= high) {
        mid = low + ((high - low) / 2);
        int c = 1, sum = 0;

        for (int i = 0; i < n; i++) {
            sum += boards[i];
            if (sum > mid) {
                c++;
                sum = boards[i];
            }
        }
        if (c > k) low = mid + 1;
        else high = mid - 1;
    }
    cout << low << endl;
    return 0;
} 