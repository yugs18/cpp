/*
Given a linked list, sort its nodes based on the data value in them. Return the head of the sorted linked list.
*/
#include <iostream>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    public:
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

    void display(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    Node* middle_element(Node* head) {
        Node* fast = head->next;
        Node* slow = head;

        while (true) {
            if (fast == nullptr || fast->next == nullptr) return slow;

            fast = fast->next->next;
            slow = slow->next;
        }
    }

    Node* sort_list(Node* head) {
        if (head == nullptr || head->next == nullptr) return head;

        Node* mid = middle_element(head);

        Node* right = mid->next;
        mid->next = nullptr;
        Node* left = head;

        left = sort_list(left);
        right = sort_list(right);

        return merge_sort(left, right);
    }

    Node* merge_sort(Node* left, Node* right) {
        Node* newlist = new Node(-1);
        Node* temp = newlist;

        while (left != nullptr && right != nullptr) {
            if (left->data <= right->data) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }

        if (left != nullptr) temp->next = left;
        else temp->next = right;

        Node* result = newlist->next;
        delete newlist;
        return result;
    }
};

int main() {
    LinkedList ll;
    ll.insert_at_head(3);
    ll.insert_at_tail(1);
    ll.insert_at_tail(0);
    ll.insert_at_tail(5);
    ll.insert_at_tail(7);
    ll.insert_at_tail(44);

    ll.display(ll.head);

    Node* newhead = ll.sort_list(ll.head);
    ll.display(newhead);

    return 0;
}
