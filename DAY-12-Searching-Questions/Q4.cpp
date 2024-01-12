// Reverse a singly linked list in C++.

#include <iostream>

class Node
{
public:
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {}
};

Node *reverseLinkedList(Node *head)
{
  Node *prev = nullptr;
  Node *current = head;
  Node *next = nullptr;

  while (current != nullptr)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  return prev; // new head
}

void displayLinkedList(Node *head)
{
  while (head != nullptr)
  {
    std::cout << head->data << " -> ";
    head = head->next;
  }
  std::cout << "nullptr" << std::endl;
}

int main()
{
  // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  std::cout << "Original Linked List: ";
  displayLinkedList(head);

  // Reverse the linked list
  head = reverseLinkedList(head);

  std::cout << "Reversed Linked List: ";
  displayLinkedList(head);

  // Memory cleanup (freeing the allocated nodes)
  Node *current = head;
  while (current != nullptr)
  {
    Node *next = current->next;
    delete current;
    current = next;
  }

  return 0;
}
