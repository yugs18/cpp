/*
A valid parentheses string is defined by the following rules:

It is the empty string "".
If A is a valid parentheses string, then so is "(" + A + ")".
If A and B are valid parentheses strings, then A + B is also valid.

A primitive valid parentheses string is a non-empty valid string that cannot be split into two or more non-empty valid parentheses strings.

Given a valid parentheses string s, your task is to remove the outermost parentheses from every primitive component of s and return the resulting string.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "()(()())(())";
    string t = "";

    int c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            c++;
            if (c > 1) t += s[i];
        }
        if (s[i] == ')') {
            c--;
            if (c > 0) t += s[i];
        }
    }

    cout << t << endl;
    return 0;
}