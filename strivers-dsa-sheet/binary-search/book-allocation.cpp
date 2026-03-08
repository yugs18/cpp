/*
Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> pages = {25, 46, 28, 49, 24};
    int m = 4, n = pages.size();

    if (n < m) {
        cout << -1 << endl;
        return 0;
    }
    
    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);
    int mid;

    while (low <= high) {
        mid = low + ((high - low) / 2);
        int c = 1, sum = pages[0];

        for (int i = 1; i < n; i++) {
            sum += pages[i];
            if (sum > mid) {
                c++;
                sum = pages[i];
            }
        }
        if (c > m) low = mid + 1;
        else high = mid - 1;
    }
    cout << low << endl;
    return 0;
}