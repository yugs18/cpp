/* Given an integer N, write a program to print numbers from N to 1. */
#include <iostream>
using namespace std;

void number(int n)
{
    if (n == 0)
        return;

    cout << n << ",";
    number(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    number(n);
    cout << endl;
    return 0;
}