/* Given an array, we have found the number of occurrences of each element in the array. */
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

    cout << "Frequency: \n";
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
