#include <iostream>

class MyQueue
{
private:
  static const int MAX_SIZE = 100; // Maximum size of the queue
  int arr[MAX_SIZE];
  int front;
  int rear;

public:
  MyQueue() : front(-1), rear(-1) {}

  // Enqueue (Insertion)
  void enqueue(int value)
  {
    if (rear == MAX_SIZE - 1)
    {
      std::cout << "Queue is full. Cannot enqueue." << std::endl;
      return;
    }

    if (front == -1)
    {
      // If the queue is empty, set front to 0
      front = 0;
    }

    // Increment rear and add the element
    arr[++rear] = value;
  }

  // Dequeue (Deletion)
  void dequeue()
  {
    if (front == -1)
    {
      std::cout << "Queue is empty. Cannot dequeue." << std::endl;
      return;
    }

    // If front and rear are equal, the queue becomes empty
    if (front == rear)
    {
      front = rear = -1;
    }
    else
    {
      // Increment front to remove the front element
      front++;
    }
  }

  // Display the front element
  void peek()
  {
    if (front == -1)
    {
      std::cout << "Queue is empty." << std::endl;
    }
    else
    {
      std::cout << "Front element: " << arr[front] << std::endl;
    }
  }

  // Check if the queue is empty
  bool isEmpty()
  {
    return (front == -1);
  }

  // Display the size of the queue
  int size()
  {
    if (front == -1)
    {
      return 0;
    }
    else
    {
      return rear - front + 1;
    }
  }
};

int main()
{
  MyQueue myQueue;

  myQueue.enqueue(10);
  myQueue.enqueue(20);
  myQueue.enqueue(30);

  myQueue.peek();

  myQueue.dequeue();

  myQueue.peek();

  if (myQueue.isEmpty())
  {
    std::cout << "Queue is empty." << std::endl;
  }
  else
  {
    std::cout << "Queue is not empty." << std::endl;
  }

  std::cout << "Size of the queue: " << myQueue.size() << std::endl;

  return 0;
}
