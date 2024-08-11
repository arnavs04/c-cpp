#include <iostream>
using namespace std;

// Creating a Linked List
class node
{
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* newnode = new node(val);

    if (head == NULL) {
        head = newnode;
        return;
    } 

    node* temp = head;
    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = newnode;
}

// Function to display the linkedlist
void display(node* head)
{
    node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Main Function 
int main()
{
    node* head = NULL;

    // Taking input
    int n;
    cout << "Till which natural number do you want the linked list to contain? ";
    cin >> n;

    // Inserting the natural numbers at the tail in new nodes made dynamically
    for (int i = 1; i <= n; i++) {
        insertAtTail(head, i);
    }

    // Displaying the LinkedList
    display(head);
    return 0;
}