/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position. For example, if s = "abcde", then it will be "bcdea" after one shift.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "rotation", goal = "tionrota";

    if (s.length() != goal.length()) return 0;

    s += s;
    if (s.find(goal) != string::npos) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}