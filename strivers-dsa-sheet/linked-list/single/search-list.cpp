/*
Given the head of a linked list and an integer value, find out whether the integer is present in the linked list or not. Return true if it is present, or else return false.
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
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return; 
        }

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
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        }

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

    void list_length() {
        if (head == nullptr) {
            cout << "0" << endl;
            return;
        }

        Node* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        cout << count << endl;
        return;
    }

    void list_search(int val) {
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) {
                cout << "True" << endl;
                return;
            }

            temp = temp->next;
        }

        cout << "False" << endl;
        return;
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

    ll.list_length();

    ll.list_search(10);

    return 0;
}
