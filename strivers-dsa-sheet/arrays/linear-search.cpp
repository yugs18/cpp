/* Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1. */
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 6, 4, 8, 0, 5, 3};
    int num = 2, f = -1;

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == num) {
            f = i;
            break;
        }
    
    cout << f << endl;

    return 0;
}