/* Given an integer N return the reverse of the given number. */
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0)
    {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    cout << "Reverse is: " << rev << endl;
}