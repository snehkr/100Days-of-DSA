#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class CircularLinkedList
{
private:
  Node *head;

public:
  CircularLinkedList() : head(nullptr) {}

  // Insertion at the beginning
  void insertAtBeginning(int value)
  {
    Node *newNode = new Node{value, nullptr};
    if (head == nullptr)
    {
      head = newNode;
      head->next = head; // Point to itself in a circular list
    }
    else
    {
      newNode->next = head;
      Node *last = head;
      while (last->next != head)
      {
        last = last->next;
      }
      last->next = newNode;
      head = newNode;
    }
  }

  // Deletion at the beginning
  void deleteAtBeginning()
  {
    if (head != nullptr)
    {
      Node *temp = head;
      if (head->next == head)
      {
        head = nullptr;
      }
      else
      {
        Node *last = head;
        while (last->next != head)
        {
          last = last->next;
        }
        head = head->next;
        last->next = head;
      }
      delete temp;
    }
  }

  // Traversal
  void printList()
  {
    if (head != nullptr)
    {
      Node *current = head;
      do
      {
        cout << current->data << " ";
        current = current->next;
      } while (current != head);
      cout << endl;
    }
  }
};

int main()
{
  CircularLinkedList myList;

  myList.insertAtBeginning(3);
  myList.insertAtBeginning(2);
  myList.insertAtBeginning(1);

  myList.printList();

  myList.deleteAtBeginning();

  myList.printList();

  return 0;
}
