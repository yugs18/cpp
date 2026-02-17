/* Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};;
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    int n1 = arr1.size(), n2 = arr2.size();

    vector<int> n;
    int j = 0, i = 0;

    while(i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j]) {
            if (n.empty() || n.back() != arr1[i]) {
                n.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (n.empty() || n.back() != arr2[j]) {
                n.push_back(arr2[j]);
            }
            j++;
        } else {
            if (n.empty() || n.back() != arr1[i]) {
                n.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    for (int k = i; k < n1; k++) {
        if (n.empty() || n.back() != arr1[k]) n.push_back(arr1[k]);
    }
    for (int k = j; k < n2; k++) {
        if (n.empty() || n.back() != arr2[k]) n.push_back(arr2[k]);
    }

    for (auto i: n)
        cout << i << " ";
    cout << endl;
}