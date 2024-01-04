#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList
{
private:
  Node *head;

public:
  LinkedList() : head(nullptr) {}

  // Insert at the Beginning
  void insertAtBeginning(int value)
  {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }

  // Insert at the End
  void insertAtEnd(int value)
  {
    Node *newNode = new Node(value);
    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      Node *current = head;
      while (current->next != nullptr)
      {
        current = current->next;
      }
      current->next = newNode;
    }
  }

  // Insert at a Specific Position
  void insertAtPosition(int value, int position)
  {
    Node *newNode = new Node(value);
    if (position == 0 || head == nullptr)
    {
      newNode->next = head;
      head = newNode;
    }
    else
    {
      Node *current = head;
      for (int i = 0; i < position - 1 && current->next != nullptr; ++i)
      {
        current = current->next;
      }
      newNode->next = current->next;
      current->next = newNode;
    }
  }

  // Deletion at the Beginning
  void deleteAtBeginning()
  {
    if (head != nullptr)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }

  // Deletion at the End
  void deleteAtEnd()
  {
    if (head != nullptr)
    {
      if (head->next == nullptr)
      {
        delete head;
        head = nullptr;
      }
      else
      {
        Node *current = head;
        while (current->next->next != nullptr)
        {
          current = current->next;
        }
        delete current->next;
        current->next = nullptr;
      }
    }
  }

  // Deletion at a Specific Position
  void deleteAtPosition(int position)
  {
    if (head != nullptr && position >= 0)
    {
      if (position == 0)
      {
        Node *temp = head;
        head = head->next;
        delete temp;
      }
      else
      {
        Node *current = head;
        for (int i = 0; i < position - 1 && current->next != nullptr; ++i)
        {
          current = current->next;
        }
        if (current->next != nullptr)
        {
          Node *temp = current->next;
          current->next = current->next->next;
          delete temp;
        }
      }
    }
  }

  // Traversal
  void traverse()
  {
    Node *current = head;
    while (current != nullptr)
    {
      std::cout << current->data << " ";
      current = current->next;
    }
    std::cout << std::endl;
  }
};

int main()
{
  LinkedList list;

  list.insertAtEnd(1);
  list.insertAtEnd(2);
  list.insertAtBeginning(0);
  list.insertAtPosition(3, 2);

  std::cout << "Original List: ";
  list.traverse();

  list.deleteAtEnd();
  list.deleteAtBeginning();
  list.deleteAtPosition(1);

  std::cout << "Modified List: ";
  list.traverse();

  return 0;
}
