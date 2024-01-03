
#include <iostream>

struct Node
{
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {}
};

// Queue class
class Queue
{
private:
  Node *front; // Front pointer
  Node *rear;  // Rear pointer
  int size;    // Size of the queue

public:
  Queue() : front(nullptr), rear(nullptr), size(0) {}

  void Enqueue(int element)
  {
    // Step 1: Create a new node with the given element
    Node *newNode = new Node(element);

    // Step 2: Set the next pointer of the new node to null
    newNode->next = nullptr;

    // Step 3: If the queue is empty, set both front and rear pointers to the new node
    if (front == nullptr)
    {
      front = rear = newNode;
    }
    else
    {
      // Step 4: If the queue is not empty, set the next pointer of the current rear node to the new node
      rear->next = newNode;
      // Step 5: Set the rear pointer of the queue to the new node
      rear = newNode;
    }

    // Step 6: Increment the size of the queue
    size++;

    // Step 7: Return success or the updated queue (optional)
    // This implementation does not return anything.
  }

  void Display()
  {
    Node *current = front;
    std::cout << "Queue elements: ";
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
  Queue myQueue;
  myQueue.Enqueue(10);
  myQueue.Enqueue(20);
  myQueue.Enqueue(30);
  myQueue.Display();

  return 0;
}
