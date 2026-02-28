/* Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1. Note: Consider 0 based indexing */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int k = 13;
    int n = nums.size();

    int low = 0, high = n - 1, mid, f = 0;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (nums[mid] == k)
            f = 1;
        if (k < nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (f)
        cout << high << endl;
    else
        cout << -1 << endl;

    return 0;
}