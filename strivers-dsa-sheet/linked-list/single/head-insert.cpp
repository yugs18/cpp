/*
Given a linked list and an integer value val, insert a new node with that value at the beginning (before the head) of the list and return the updated linked list.
*/
#include <iostream>
using namespace std;

class Node{
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

void print_list(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* a = new Node(0);
    Node* b = new Node(1);
    a->next = b;
    Node* c = new Node(2);
    b->next = c;

    print_list(a);

    int hd = 5;
    Node* y = new Node(hd, a);

    print_list(y);
    return 0;
}