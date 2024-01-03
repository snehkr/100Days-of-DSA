## 📅 TRACK DAYS: 03 of 30

## `✅ Day 03 : Queues - Algorithms & Code`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Queues Operations`
    - Enqueue
    - Dequeue
    - Front (or Peek)
    - rear
    - IsEmpty
    - IsFull
    - isNull

</br>

### 🧱 QUEUE : Definition

- A queue is a data structure that follows the First In, First Out (FIFO) principle, meaning that the first element added to the queue is the first one to be removed.
- It's analogous to a queue of people waiting in line, where the person who arrives first is the first to be served.

### 🧱 QUEUE : Basic Operations

#### 1️⃣ Enqueue Operation :-

- **Operation :** Adds (or stores) an element to the end of the queue.
- **Description :** This operation adds an element to the end of the queue. It's like a person joining the back of the line.

- **Algorithm :**

  ```md
  Algorithm Enqueue(Queue, element):

      Input: Queue - the queue data structure
             element - the element to be enqueued

      1. Create a new node with the given element.
      2. If the queue is empty:
          - Set the front and rear pointers of the queue to the new node.
      3. If the queue is not empty:
          - Set the next pointer of the current rear node to the new node.
      4. Set the rear pointer of the queue to the new node.
      5. Increment the size of the queue by 1.
      6. Return success or the updated queue.
  ```

- **Code :**

  ```cpp
  void queueEnqueue(int data)
  {
    if (capacity == rear) {
      printf("\nQueue is full\n");
      return;
    }

    else {
      queue[rear] = data;
      rear++;
    }
    return;
  }

  ```

#### 2️⃣ Dequeue Operations :-

- **Operation :** Removal of elements from the queue.

- **Description :** This operation removes the element from the front of the queue. It's similar to the person at the front of the line being served and then leaving.

- **Algorithm :**

  ```md
  Algorithm Dequeue(Queue):

      Input: Queue - the queue data structure

      1. If the queue is empty:
          - Display an error message (underflow) and return.
      2. Save the data of the front node to a variable (let's call it removedData).
      3. If the front and rear pointers are pointing to the same node (i.e., only one node in the queue):
          - Set both front and rear pointers to null.
      4. If there is more than one node in the queue:
          - Set the front pointer to the next node.
      5. Delete the node containing the removedData.
      6. Decrement the size of the queue by 1.
      7. Return the removedData.
  ```

- **Code :**

  ```cpp
  void queueDequeue()
  {
    if (front == rear) {
      printf("\nQueue is empty\n");
      return;
    }

    else {
      for (int i = 0; i < rear - 1; i++) {
        queue[i] = queue[i + 1];
      }
      rear--;
    }
    return;
  }

  ```

#### 3️⃣ Front/Peek Operations :-

- **Operation :** Acquires the data element available at the front node of the queue without deleting it.

- **Description :** This operation allows you to view the element at the front of the queue without removing it. It's like checking who is at the front of the line without asking them to leave.

- **Algorithm :**

  ```md
  Algorithm Peek(Queue):

      Input: Queue - the queue data structure

      1. If the queue is empty:
          - Display an error message (underflow) and return.
      2. Retrieve the data of the front node (front->data).
      3. Return the retrieved data.
  ```

- **Code :**

  ```cpp

  int front(Queue* queue)
  {
    if (isempty(queue))
      return INT_MIN;
    return queue->arr[queue->front];
  }

  ```

#### 4️⃣ Rear Operations :-

- **Operation :** This operation returns the element at the rear end without removing it.

- **Algorithm :**

  ```md
  Algorithm GetRear(Queue):

      Input: Queue - the queue data structure

      1. If the queue is empty:
          - Display an error message (underflow) and return.
      2. Retrieve the data of the rear node (rear->data).
      3. Return the retrieved data.
  ```

- **Code :**

  ```cpp

  int rear(queue<int>& myQueue)
  {
    queue<int> tempQueue = myQueue;

    while (tempQueue.size() > 1) {
      tempQueue.pop();
    }

    return tempQueue.front();
  }

  ```

#### 5️⃣ isEmpty Operations :-

- **Operation :** This operation checks whether the queue is empty or not. If the queue has no elements, it is considered empty.

- **Algorithm :**

  ```md
  Algorithm isEmpty(Queue):

      Input: Queue - the queue data structure

      1. If the front pointer is equal to -1 (indicating an empty queue):
          a. Return true (indicating that the queue is empty).
      2. Otherwise:
          a. Return false (indicating that the queue is not empty).
  ```

- **Code :**

  ```cpp

  bool isEmpty()
  {
    if (front == -1)
      return true;
    else
      return false;
  }

  ```

#### 6️⃣ isFull Operations :-

- **Operation :** In a fixed-size queue, this operation checks whether the queue is full and cannot accept more elements.

- **Algorithm :**

  ```md
  Algorithm isFull(Queue):

      Input: Queue - the queue data structure
             capacity - the maximum capacity of the queue

  1. If the current size of the queue is equal to the capacity:
     a. Return true (indicating that the queue is full).
  2. Otherwise:
     a. Return false (indicating that the queue is not full).
  ```

- **Code :**

  ```cpp

  bool isFull()
  {
      if (front == 0 && rear == MAX_SIZE - 1) {
          return true;
      }
      return false;
  }

  ```

</br></br>

<h4 align="center">
  © 30 DAYS OF DSA [ 2024-25 ] </br>
  ALL RIGHTS RESERVED
</h4>

<p align="center">
  HAPPY LEARNING !!</br>
  DEVELOPED WITH ❤️ BY SNEH KR 
</p>
