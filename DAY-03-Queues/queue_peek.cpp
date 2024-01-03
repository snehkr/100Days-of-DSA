#include <iostream>

struct Node
{
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {}
};

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
    Node *newNode = new Node(element);
    newNode->next = nullptr;

    if (front == nullptr)
    {
      front = rear = newNode;
    }
    else
    {
      rear->next = newNode;
      rear = newNode;
    }

    size++;
  }

  // Function to peek at the front element
  int Peek()
  {
    // Step 1: If the queue is empty, display an error message and return
    if (front == nullptr)
    {
      std::cerr << "Error: Queue underflow (empty queue)" << std::endl;
      return -1; // Assuming -1 as an error code
    }

    // Step 2: Retrieve the data of the front node
    int frontData = front->data;

    // Step 3: Return the retrieved data
    return frontData;
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

  int frontElement = myQueue.Peek();
  if (frontElement != -1)
  {
    std::cout << "Front element: " << frontElement << std::endl;
  }

  myQueue.Display();
  return 0;
}
