/*
Create Double Linked List
*/
#include <iostream>
using namespace std;

class Node {
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int val) : prev(nullptr), data(val), next(nullptr) {}
};

class LinkedList {
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next_node = temp->next;
            delete temp;
            temp = next_node;
        }
    }

    void insert_at_head(int val) {
        Node* new_node = new Node(val);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insert_at_tail(int val) {
        if (head == nullptr) {
            insert_at_head(val);
            return;
        }
        
        Node* new_node = new Node(val);
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

    void display() {
        cout << "nullptr" << "<->";
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "<->";
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
        head->prev = nullptr;
        temp->next = nullptr;
        delete temp;
    }

    void delete_at_tail() {
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
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        temp->prev = nullptr;

        delete temp;
    }

    void reverse_list() {
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        }

        Node* temp = head;
        Node* last_node = nullptr;
        while (temp != nullptr) {
            Node* next_node = temp->next;
            temp->next = temp->prev;
            temp->prev = next_node;
            last_node = temp;
            temp = next_node;
        }
        head = last_node;
    }
};

int main() {
    LinkedList ll;
    ll.insert_at_head(3);
    ll.insert_at_head(2);
    ll.insert_at_head(1);
    ll.insert_at_head(0);

    ll.display();

    ll.reverse_list();

    ll.display();

    return 0;

}