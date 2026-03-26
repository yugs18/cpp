/*
 Implement the function myAtoi(s) which converts the given string s to a 32-bit signed integer (similar to the C/C++ atoi function).

Steps to Implement: 1. First, ignore any leading whitespace characters ' ' until the first non-whitespace character is found.
2. Check the next character to determine the sign. If it’s a '-', the number should be negative. If it’s a '+', the number should be positive. If neither is found, assume the number is positive.
3. Read the digits and convert them into a number. Stop reading once a non-digit character is encountered or the end of the string is reached. Leading zeros should be ignored during conversion.
4. The result should be clamped within the 32-bit signed integer range: [-2147483648, 2147483647]. If the computed number is outside this range, return -2147483648 if the number is less than -2147483648, or return 2147483647 if the number is greater than 2147483647.
5. Finally, return the computed number after applying all the above steps.
*/
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    string s = "4193 with words";
    int n = s.length();

    int start = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            start = i;
            break;
        }
    }
    if (start == n) return 0;

    int sign = 1;
    if (s[start] == '-' || s[start] == '+') {
        if (s[start] == '-')
            sign = -1;
        start++;
    }
    if (start == n) return 0;

    if (!(s[start] >= '0' && s[start] <= '9')) {
        cout << 0 << endl;
        return 0;
    }

    int num = 0;
    for (int i = start; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int d = s[i] - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && d > 7)) {
                if (sign == 1) cout << INT_MAX;
                else cout << INT_MIN;
                cout << endl;
                return 0;
            }
            num = num * 10 + d;
        } else break;
    }

    cout << sign * num << endl;
    return 0;
}