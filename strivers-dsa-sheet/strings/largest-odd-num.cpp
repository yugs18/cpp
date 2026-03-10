/*
Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string) that is a substring of the given string s.
The number returned should not have leading zero's. But the given input string may have leading zero.
*/
#include <iostream>
using namespace std;

int main() {
    string s = "0214638";
    int n = s.length();
    int ind = -1;

    for (int i = n - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2) {
            ind = i;
            break;
        }
    }

    int i = 0;
    while (i <= ind && s[i] == '0') i++;

    string sub = s.substr(i, ind - i + 1);

    cout << sub << endl;
    return 0;
}