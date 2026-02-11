/* Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string. */
#include <iostream>
#include <string>
using namespace std;

string rev(string str, int start, int end) {
    if (start >= end) {
        return str;
    }
    swap(str[start], str[end]);
    return rev(str, start + 1, end - 1);
}

int main() {
    string str, rev_str;
    cout << "Enter a string: ";
    getline(cin, str);

    rev_str = rev(str, 0, str.length() - 1);
    if (str == rev_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}