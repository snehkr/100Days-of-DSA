#include <iostream>

class Queue
{
private:
  int *array;   // Array to store queue elements
  int front;    // Front pointer
  int rear;     // Rear pointer
  int capacity; // Maximum capacity of the queue
  int size;     // Current size of the queue

public:
  // Constructor
  Queue(int capacity) : front(-1), rear(-1), capacity(capacity), size(0)
  {
    array = new int[capacity];
  }

  // Destructor
  ~Queue()
  {
    delete[] array;
  }

  bool isFull()
  {
    // Step 1: If the current size of the queue is equal to the capacity
    // Return true (indicating that the queue is full)
    if (size == capacity)
    {
      return true;
    }
    // Step 2: Otherwise, return false (indicating that the queue is not full)
    else
    {
      return false;
    }
  }

  void Enqueue(int element)
  {
    if (isFull())
    {
      std::cerr << "Error: Queue overflow (queue is full)" << std::endl;
      return;
    }

    if (front == -1)
    {
      front = rear = 0;
    }
    else
    {
      rear = (rear + 1) % capacity;
    }
    array[rear] = element;
    size++;
  }

  void Display()
  {
    int current = front;
    std::cout << "Queue elements: ";
    for (int i = 0; i < size; ++i)
    {
      std::cout << array[current] << " ";
      current = (current + 1) % capacity;
    }
    std::cout << std::endl;
  }
};

// Example usage
int main()
{
  Queue myQueue(3);

  myQueue.Enqueue(10);
  myQueue.Enqueue(20);
  myQueue.Enqueue(30);

  myQueue.Display();

  if (myQueue.isFull())
  {
    std::cout << "The queue is full." << std::endl;
  }
  else
  {
    std::cout << "The queue is not full." << std::endl;
  }

  return 0;
}
