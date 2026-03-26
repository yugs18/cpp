/*
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    int n = s.length();

    int c = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 40) c++;
        if (s[i] == 41) c--;

        if (c > max) max = c;
    }

    cout << max << endl;
    return 0;
}