/* Problem Statement: Given an array of size N. Find the highest and lowest frequency element. */
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int max_freq = 0, min_freq = n;
    int max_freq_element = arr[0], min_freq_element = arr[0];
    for (auto it : mp) {
        max_freq = max(max_freq, it.second);
        min_freq = min(min_freq, it.second);
        if (it.second == max_freq) {
            max_freq_element = it.first;
        }
        if (it.second == min_freq) {
            min_freq_element = it.first;
        }
    }

    cout << "Max frequency: " << max_freq << endl;
    cout << "Min frequency: " << min_freq << endl;
    cout << "Max frequency element: " << max_freq_element << endl;
    cout << "Min frequency element: " << min_freq_element << endl;

    return 0;
}
