/*
Given an input string, containing upper-case and lower-case letters, digits, and spaces( ' ' ). A word is defined as a sequence of non-space characters. The words in s are separated by at least one space. Return a string with the words in reverse order, concatenated by a single space.
*/
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s = " amazing coding skills ";

    string t = "", w;
    stringstream ss(s);
    vector<string> words;

    while (ss >> w) words.insert(words.begin(), w);

    bool isFirst = true;
    for (string i : words) {
        if (isFirst) {
            t += i;
            isFirst = false;
        }
        else t += ' ' + i;
    }

    cout << t << endl;
    return 0;
}