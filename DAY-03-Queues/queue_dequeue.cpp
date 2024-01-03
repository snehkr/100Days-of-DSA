
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

  int Dequeue()
  {
    // Step 1: If the queue is empty, display an error message and return
    if (front == nullptr)
    {
      std::cerr << "Error: Queue underflow (empty queue)" << std::endl;
      return -1; // Assuming -1 as an error code
    }

    // Step 2: Save the data of the front node to a variable (removedData)
    int removedData = front->data;

    // Step 3: If there is only one node in the queue, set both front and rear pointers to null
    if (front == rear)
    {
      delete front;
      front = rear = nullptr;
    }
    else
    {
      // Step 4: If there is more than one node, set the front pointer to the next node
      Node *temp = front;
      front = front->next;
      delete temp;
    }

    // Step 5: Delete the node containing the removedData
    // Step 6: Decrement the size of the queue by 1
    size--;

    // Step 7: Return the removedData
    return removedData;
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

  int removedElement = myQueue.Dequeue();
  if (removedElement != -1)
  {
    std::cout << "Dequeued element: " << removedElement << std::endl;
  }

  myQueue.Display();
  return 0;
}
