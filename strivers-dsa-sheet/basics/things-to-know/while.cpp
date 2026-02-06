#include <iostream>
using namespace std;

int main() {
    // factorial of a number using while loop
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    int f = 1;
    int i = 1;
    while (i <= number) {
        f *= i;
        i++;
    }
    cout << "Factorial of " << number << " = " << f << endl;
    return 0;
}