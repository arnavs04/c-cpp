#include <iostream>
using namespace std;

// Creating a Linked List
class node
{
    public:
    int data;
    node* next;

    // Function for node to orchestrate how node values will be take in
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function for Inserting a New Node at the Tail
void insertAtTail(node* &head, int val)
{
    // Creating a (to be inserted) new node right now which hasn't been linked with the rest yet.
    node* newnode = new node(val);

    // Initial Case which is if there are no nodes from before
    if (head == NULL)
    {
        head = newnode;
        return;
    } 

    // Setting Temporary Iterator to Traverse the LinkedList until the end
    node* temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }

    // Connecting the new node into linkedlist
    temp -> next = newnode;
}

// Function to display the linkedlist
void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
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
    for (int i = 1; i <= n; i++)
    {
        insertAtTail(head, i);
    }

    // Displaying the LinkedList
    display(head);
    return 0;
}