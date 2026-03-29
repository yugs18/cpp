/*
Given a Linked List, delete the tail of the list and print the updated list.
*/
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    private:
        Node* head;

    public:
    // Initialize an empty list
    LinkedList() : head(nullptr) {}

    // free memory
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next_node = current->next;
            delete current;
            current = next_node;
        }
    }

    void insert_at_head(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void insert_at_tail(int val) {
        Node* new_node = new Node(val);
        Node* current = head;
        while (current->next != nullptr) current = current->next;
        current->next = new_node;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void delete_at_head() {
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* temp = head;
        head = temp->next;
        delete temp;
    }

    void delete_at_tail() {
        if (head == nullptr) return;
        if (head->next == nullptr) {
            delete_at_head();
            return;
        }

        Node* temp = head;


        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        Node* last = temp->next;
        temp->next = nullptr;
        delete last;
    }
};

int main() {
    LinkedList ll;
    ll.insert_at_head(1);
    ll.insert_at_head(0);
    ll.insert_at_tail(2);
    ll.insert_at_tail(3);
    ll.insert_at_tail(4);

    ll.display();
    
    ll.delete_at_tail();

    ll.display();
    return 0;
}