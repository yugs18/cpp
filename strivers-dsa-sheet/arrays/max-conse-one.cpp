/* Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1};
    int n = arr.size();

    int c = 0, maxi = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            c++;
        } else {
            maxi = max(maxi, c);
            c = 0;
        }
    }

    maxi = max(maxi, c);
    cout << maxi << endl;
    return 0;
}