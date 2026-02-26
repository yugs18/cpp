/* There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,-3,-1,-2, 3};
    int n = arr.size();

    vector<int> result(n, 0);
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            result[pos] = arr[i];
            pos += 2;
        } else if (arr[i] < 0) {
            result[neg] = arr[i];
            neg += 2;
        }
    }

    for (auto i : result) cout << i << " ";
    cout << endl;

    return 0;
}