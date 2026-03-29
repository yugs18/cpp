/*
Creating a Linked List
*/
#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int dt, Node* nt) {
        data = dt;
        next = nt;
    }

    Node(int dt) {
        data = dt;
        next = nullptr;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4};

    Node* y1 = new Node(arr[0]);
    Node* y2 = new Node(arr[1]);
    y1->next = y2;

    cout << y1 << endl;

    cout << y1->data << endl;
    cout << y1->next << endl;
    cout << y2->data << endl;

    return 0;
}