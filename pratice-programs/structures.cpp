#include <iostream>
using namespace std;

struct Sol {
    int id;
    string name;
};

int main() {
    Sol st1;
    st1.id = 1;
    st1.name = "Some";
    cout << st1.id << " " << st1.name << endl;
}