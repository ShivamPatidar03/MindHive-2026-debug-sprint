// MindHive 2026 - Debug Sprint
// Q2: Selective Node Compression in a Singly Linked Structure

#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void compressNode(Node* ptr) {

    Node* temp = ptr;
    ptr->value = ptr->next->value;
    ptr->next = ptr->next->next;
    delete ptr->next;          
}

void display(Node* head) {
    while(head->next != NULL) {  
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{11, NULL};
    head->next = new Node{22, NULL};
    head->next->next = new Node{33, NULL};
    head->next->next->next = new Node{44, NULL};
    head->next->next->next->next = new Node{55, NULL};

    Node* target = head->next->next;   

    compressNode(target);

    cout << "Modified List:\n";
    display(head);

    return 0;
}
