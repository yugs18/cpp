/* Given an integer N, return the number of digits in N. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count = 0;
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // int x = n;
    // while (x > 0) {
    //     x /= 10;
    //     count++;
    // }
    
    count = (int)(log10(n) + 1);
    cout << "Number of digits: " << count << endl;
}