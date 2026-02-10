/* Given an integer N, return true it is an Armstrong number otherwise return false. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n;
cout << "Enter a number: ";
cin >> n;

int cd = 0, x = n;
while (x > 0) {
cd++;
x /= 10;
}

int arm = 0;
x = n;
while (x > 0) {
int d = x % 10;
arm = arm + pow(d, cd);
x /= 10;
}

if (arm == n)
cout << "Armstrong Number\n";
else
cout << "Not a Armstrong Number\n";
}

