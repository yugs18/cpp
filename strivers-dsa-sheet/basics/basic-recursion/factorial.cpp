/* Given a number X,  print its factorial. */
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int f = 1;
    f = fact(n);
    cout << "Factorial of " << n << " is: " << f << endl;
    return 0;
}