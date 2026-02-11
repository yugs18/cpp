/* Given an integer N, write a program to print numbers from 1 to N. */
#include <iostream>
using namespace std;

void number(int n, int c) {
    if ( n == 0)
        return;

    cout << c << ",";
    number(n - 1, c + 1);
}

int main() {
    int n, c = 1;
    cout << "Enter a number: ";
    cin >> n;

    number(n, c);
    cout << endl;
    return 0;
}