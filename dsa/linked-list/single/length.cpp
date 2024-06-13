#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int lengthOfLinkedList(ListNode* head) {
    int length = 0;
    ListNode* current = head;
    
    // Traverse the list and count nodes
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    
    return length;
}

// Example usage
int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Calculate length
    int len = lengthOfLinkedList(head);
    std::cout << "Length of the linked list: " << len << std::endl;

    // Clean up (free memory)
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
