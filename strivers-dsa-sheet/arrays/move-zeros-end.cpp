/*  You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 0, 0, 4, 5, 0, 0, 3, 0, 9, 0, 8, 0};
    int n = arr.size();

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    cout << "Result: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}