/* Given two integers N1 and N2, find their greatest common divisor */
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    if (x > y)
        swap(x, y);

    int gcd = 1;
    for (int i = 1; i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }
    cout << "The greatest common divisor of " << x << " and " << y << " is: " << gcd << endl;
    return 0;
}