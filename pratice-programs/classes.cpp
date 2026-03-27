#include <iostream>
using namespace std;

class Sol {
    public:
    Sol() {
        cout << "Cons" << endl;
    }
    ~Sol() {
        cout << "Des" << endl;
    }
};

int main() {
    Sol ob1;
    Sol ob2;
    Sol ob3;
}