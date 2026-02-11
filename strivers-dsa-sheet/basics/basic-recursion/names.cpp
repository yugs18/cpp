/* Given an integer N, write a program to print your name N times. */
#include <iostream>
using namespace std;

void names(int n) {
    if (n == 0)
        return;

    cout << "Your Name ";
    names(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    names(n);
    cout << endl;
    return 0;
}