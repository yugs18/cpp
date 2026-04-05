/*
Given the head of a singly linked list. Group all the nodes with odd indices followed by all the nodes with even indices and return the reordered list. Consider the 1st node to have index 1 and so on. The relative order of the elements inside the odd and even group must remain the same as the given input.
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

    void middle_element() {
        Node* fast = head;
        Node* slow = head;

        while (true) {
            if (fast == nullptr || fast->next == nullptr) {
                cout << slow->data << endl;
                return;
            }

            fast = fast->next->next;
            slow = slow->next;
        }
    }

    Node* reverse_list(Node* head) {
        if (head == nullptr || head->next == nullptr) return head;

        Node* newhead = reverse_list(head->next);
        Node* nextnode = head->next;
        nextnode->next = head;
        head->next = nullptr;

        return newhead;
    }

    void detect_cycle() {
        Node* fast = head;
        Node*slow = head;

        while (true) {
            if (fast == nullptr || fast->next == nullptr) {
                cout << "No Cycle" << endl;
                return;
            }

            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                cout << "Cycle Detected" << endl;
                break;
            }
        }
        slow = head;
        while (fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        cout << "Starting point: " << slow->data << endl;
        return;
    }

    void segregate_even_odd() {
        Node* tempeven = nullptr;
        Node* tempodd = nullptr;

        Node* temp1 = head;
        
        Node* eventail = tempeven;
        Node* oddtail = tempodd;
        
        int c = 0;
        while (temp1 != nullptr) {
            Node* temp2 = temp1;
            temp1 = temp1->next;
            temp2->next = nullptr;

            if (c % 2 != 0) {
                if (eventail == nullptr) {
                    eventail = temp2;
                    tempeven = eventail;
                } else {
                    eventail->next = temp2;
                    eventail = eventail->next;
                }
            } else {
                if (oddtail == nullptr) {
                    oddtail = temp2;
                    tempodd = oddtail;
                } else {
                    oddtail->next = temp2;
                    oddtail = oddtail->next;
                }
            }
            c++;
        }
        
        oddtail->next = tempeven;
        head = tempodd;
    }
};

int main() {
    LinkedList ll;
    ll.insert_at_head(0);
    ll.insert_at_tail(1);
    ll.insert_at_tail(2);
    ll.insert_at_tail(3);
    ll.insert_at_tail(4);
    ll.insert_at_tail(5);

    ll.display();

    ll.segregate_even_odd();
    ll.display();

    return 0;
}
