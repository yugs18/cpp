/*
Given two sorted arrays a and b of size m and n respectively. Find the kth element of the final sorted array.
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> nums1 = {100, 112, 256, 349, 770}, nums2 = {72, 86, 113, 119, 265, 445, 892};
    int m = nums1.size(), n = nums2.size();
    int k = 7;

    if (m > n)
    {
        swap(nums1, nums2);
        m = nums1.size();
        n = nums2.size();
    }
    float pos_inf = INFINITY, neg_inf = -INFINITY;
    float left1, left2, right1, right2;

    int low = max(0, k - n), high = min(k, m), i, j;
    while (low <= high)
    {
        i = (low + high) / 2;
        j = k - i;

        if (i == 0)
            left1 = neg_inf;
        else
            left1 = nums1[i - 1];
        if (j == 0)
            left2 = neg_inf;
        else
            left2 = nums2[j - 1];

        if (i == m)
            right1 = pos_inf;
        else
            right1 = nums1[i];
        if (j == n)
            right2 = pos_inf;
        else
            right2 = nums2[j];

        if (left1 <= right2 && left2 <= right1)
            break;
        if (left1 > right2)
            high = i - 1;
        if (left2 > right1)
            low = i + 1;
    }
    cout << max(left1, left2) << endl;;
    return 0;
}