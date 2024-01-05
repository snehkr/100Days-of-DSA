#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class LinkedList
{
private:
  Node *head;

public:
  LinkedList() : head(nullptr) {}

  // Insertion at the beginning
  void insertAtBeginning(int value)
  {
    Node *newNode = new Node{value, head};
    head = newNode;
  }

  // Deletion at the beginning
  void deleteAtBeginning()
  {
    if (head != nullptr)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }

  // Traversal
  void printList()
  {
    Node *current = head;
    while (current != nullptr)
    {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

int main()
{
  LinkedList myList;

  myList.insertAtBeginning(3);
  myList.insertAtBeginning(2);
  myList.insertAtBeginning(1);

  myList.printList();

  myList.deleteAtBeginning();

  myList.printList();

  return 0;
}
