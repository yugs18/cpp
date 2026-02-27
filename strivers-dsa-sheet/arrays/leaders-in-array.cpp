/* Leaders in an Array */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();

    int max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (max <= arr[i]) {
            cout << arr[i] << " ";
            max = arr[i];
        }
    }   

    cout << endl;
    return 0;
}