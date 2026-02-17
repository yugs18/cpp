/* Given a non-empty array of integers arr, every element appears twice except for one. Find that single one. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 1, 2, 2, 1, 5, 4, 5, 6};
    int n = arr.size();

    int val = 0;
    for (int i = 0; i < n; i++)
    {
        val = val ^ arr[i];
    }

    cout << val << endl;
    return 0;
}