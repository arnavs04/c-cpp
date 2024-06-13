#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool searchLinkedList(ListNode* head, int target) {
    ListNode* current = head;
    
    // Traverse the list and search for the target value
    while (current != nullptr) {
        if (current->val == target) {
            return true; // Target found
        }
        current = current->next;
    }
    
    return false; // Target not found
}

// Example usage
int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int target = 3;
    if (searchLinkedList(head, target)) {
        cout << "Element " << target << " found in the linked list." << endl;
    } else {
        cout << "Element " << target << " not found in the linked list." << endl;
    }

    // Clean up (free memory)
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
