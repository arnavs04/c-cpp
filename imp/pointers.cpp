#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    // Create a Node 'x' with the first element of the vector and a null next reference
    Node x = Node(arr[0], nullptr);
    // Create a pointer 'y' pointing to the Node 'x'
    Node* y = &x;
    // Print the memory address of the Node 'x' using the pointer 'y'
    cout << y << '\n';

    int x=2;
    int* y=&x; // y reference x
    cout<<y<<'\n';
}

/* 
A pointer is a variable that stores the memory address of another variable. 
In simpler terms, it "points" to the location in memory where data is stored. 
This allows you to indirectly access and manipulate data by referring to its memory address.
*/

/*
Understanding the difference between Node and Node*: 
A node refers to the structure that contains data and the pointer to the next node. 
In contrast, Node* (Node pointer) specifically denotes a pointer variable that stores the address of the Node it is pointing to.
*/