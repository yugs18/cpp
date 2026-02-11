/* Given a number ‘N’, find out the sum of the first N natural numbers  */
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    int n ,s = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    s = sum(n);
    cout << "The sum of first " << n << " natural numbers is: " << s << endl;
    return 0;
}