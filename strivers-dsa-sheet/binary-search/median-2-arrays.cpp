/*
Given two sorted arrays arr1 and arr2 of size m and n respectively, return the median of the two sorted arrays.



The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements.
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> nums1 = {2, 4}, nums2 = {1, 3, 5};
    int n1 = nums1.size(), n2 = nums2.size();

    float pos_inf = INFINITY, neg_inf = -INFINITY;

    int low = 0, high = n1, i, j;
    float left1, right1, left2, right2;
    while (low <= high)
    {
        i = (low + high) / 2;
        j = ((n1 + n2 + 1) / 2) - i;

        if (i == 0)
            left1 = neg_inf;
        else
            left1 = nums1[i - 1];

        if (j == 0)
            left2 = neg_inf;
        else
            left2 = nums2[j - 1];

        if (i == n1) right1 = pos_inf;
        else right1 = nums1[i];

        if (j == n2) right2 = pos_inf;
        else right2 = nums2[j];

        if (left1 <= right2 && left2 <= right1)
            break;
        if (left1 > right2)
            high = i - 1;
        if (left2 > right1)
            low = i + 1;
    }

    float mid = 0.0;

    if ((n1 + n2) % 2)
        mid = max(left1, left2);
    else
        mid = (max(left1, left2) + min(right1, right2)) / 2.0;

    cout << mid << endl;
    return 0;
}