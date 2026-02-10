/* Given an integer N, return true if it is a palindrome else return false. */
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    int x = n; // Store the original number for comparison
    while (n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    if (rev == x)
        cout << "The number is a palindrome." << endl;
    else
        cout << "The number is not a palindrome." << endl;
}