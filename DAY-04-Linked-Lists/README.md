## 📅 TRACK DAYS: 04 of 30

## `✅ Day 04 : Linked Lists - Algorithms & Code`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Linked Lists Operations`

    - Insertion
      - Insert at the Beginning
      - Insert at the End
      - Insert at a Specific Position
    - Deletion
      - Deletion at the Beginning
      - Deletion at the End
      - Deletion at a Specific Position
    - Traversal

</br>

### 🧱 Linked Lists : Definition

- A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node in the sequence.
- It consists of nodes, and each node contains data and a reference (or link) to the next node in the sequence.

### 🧱 Linked Lists : Basic Operations

#### 1️⃣ Insertion Operation :-

1. `Insert at the Beginning :`

   - **Operation :** Adding a new node with a given value at the start of the linked list.

   - **Algorithm :**

     ```md
     - Create a new node with the given data.

     - Set the next of the new node to the current head.

     - Set the head to the new node.
     ```

   - **Code :**

     ```cpp
     void insertAtBeginning(Node*& head, int data) {
          Node* newNode = new Node(data);
          newNode->next = head;
          head = newNode;
      }
     ```

2. `Insert at the End :`

   - **Operation :** Adding a new node with a given value at the end of the linked list.

   - **Algorithm :**

     ```md
     - Create a new node with the given data.

     - Traverse to the end of the list.

     - Set the next of the last node to the new node.
     ```

   - **Code :**

     ```cpp
     void insertAtEnd(Node*& head, int data) {
          Node* newNode = new Node(data);
          if (!head) {
              head = newNode;
              return;
          }
          Node* temp = head;
          while (temp->next) {
              temp = temp->next;
          }
          temp->next = newNode;
      }

     ```

3. `Insert at a Specific Position :`

   - **Operation :** Adding a new node with a given value at a specified position in the linked list.

   - **Algorithm :**

     ```md
     - Create a new node with the given data.

     - Traverse to the node at the (position - 1) in the list.

     - Set the next of the new node to the next of the (position - 1) node.

     - Set the next of the (position - 1) node to the new node.
     ```

   - **Code :**

     ```cpp
     void insertAtPosition(Node*& head, int data, int position) {
          Node* newNode = new Node(data);
          if (position == 0) {
              newNode->next = head;
              head = newNode;
              return;
          }
          Node* temp = head;
          for (int i = 0; i < position - 1 && temp; ++i) {
              temp = temp->next;
          }
          if (!temp) {
              // Handle position out of bounds
              return;
          }
          newNode->next = temp->next;
          temp->next = newNode;
      }

     ```

#### 2️⃣ Deletion Operations :-

1. `Delete from the Beginning :`

   - **Operation :** Removing the first node from the linked list.

   - **Algorithm :**

     ```md
     - If the list is empty, return.

     - Store the current head in a temporary variable.

     - Update the head to the next of the current head.

     - Delete the temporary variable.
     ```

   - **Code :**

     ```cpp
     void deleteFromBeginning(Node*& head) {
          if (!head) {
              return;
          }
          Node* temp = head;
          head = head->next;
          delete temp;
      }

     ```

2. `Delete from the End :`

   - **Operation :** Removing the last node from the linked list.

   - **Algorithm :**

     ```md
     - If the list is empty, return.

     - If there is only one node, delete it and set head to nullptr.

     - Traverse to the second-to-last node.

     - Delete the last node and set the next of the second-to-last node to nullptr.
     ```

   - **Code :**

     ```cpp
     void deleteFromEnd(Node*& head) {
          if (!head) {
              return;
          }
          if (!head->next) {
              delete head;
              head = nullptr;
              return;
          }
          Node* temp = head;
          while (temp->next->next) {
              temp = temp->next;
          }
          delete temp->next;
          temp->next = nullptr;
      }

     ```

3. `Delete from a Specific Position :`

   - **Operation :** Removing a node from a specified position in the linked list.

   - **Algorithm :**

     ```md
     - If the list is empty, return.

     - If the position is 0, delete the head.

     - Traverse to the node at the (position - 1) in the list.

     - Delete the node at the given position.
     ```

   - **Code :**

     ```cpp
     void deleteFromPosition(Node*& head, int position) {
          if (!head) {
              return;
          }
          if (position == 0) {
              Node* temp = head;
              head = head->next;
              delete temp;
              return;
          }
          Node* temp = head;
          for (int i = 0; i < position - 1 && temp; ++i) {
              temp = temp->next;
          }
          if (!temp || !temp->next) {
              // Handle position out of bounds
              return;
          }
          Node* toDelete = temp->next;
          temp->next = temp->next->next;
          delete toDelete;
      }

     ```

#### 3️⃣ Traversal Operations :-

- **Operation :** Visiting each node of the linked list in order to perform an operation, such as printing the node's value.

- **Algorithm :**

  ```md
  - Start from the head node.
  - Traverse each node by following its next pointer until reaching the end.
  - Perform the desired operation on each node.
  ```

- **Code :**

  ```cpp

  void traverse(Node* head) {
      Node* temp = head;
      while (temp) {
          // Process current node
          // ...
          temp = temp->next;
      }
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
