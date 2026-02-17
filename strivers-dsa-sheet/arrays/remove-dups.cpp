/* Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = arr.size();
    
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    j +=1;

    cout << "Unique: " << j << endl;
    cout << "Result: ";
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}