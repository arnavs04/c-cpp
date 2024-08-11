#include <bits/stdc++.h>

using namespace std;

class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = NULL;
  }
};

void PrintList(ListNode * head) // Function to print the LinkedList
{
  ListNode * curr = head;
  for (; curr != NULL; curr = curr -> next)
      cout << curr -> val << "-->";
  cout << "null" << endl;
}

void InsertatFirst(int value, ListNode* &head) {
    // Step1: creating a new Node with the given value
    ListNode * newnode = new ListNode(value);

    // Step2: Making next of newly created Node to point the head of LinkedList
    newnode->next = head;

    // Making the newly created Node as head
    head = newnode;
}

int main() {
  ListNode * head = NULL; // head of the LinkedList
  head = InsertatFirst(40, head);
  head = InsertatFirst(30, head);
  head = InsertatFirst(20, head);
  head = InsertatFirst(10, head);
  cout << "LinkedList before inserting 0 at beginning : " << endl;
  PrintList(head);
  head = InsertatFirst(0, head);
  cout << "LinkedList after inserting 0 at beginning : " << endl;
  PrintList(head);
  return 0;
}