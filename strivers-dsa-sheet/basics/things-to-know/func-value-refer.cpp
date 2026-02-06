#include <iostream>
using namespace std;

void modify_value(int value) {
    value += 10; // Modifying the value through value
}

void modify_refer(int& value) {
    value += 10; // Modifying the value through reference
}

int main() {
    int x = 5;
    modify_value(x);
    cout << "Value of x after modification: " << x << endl;
    modify_refer(x);
    cout << "Value of x after modification through reference: " << x << endl;
    return 0;
}