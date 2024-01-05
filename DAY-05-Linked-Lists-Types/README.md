## 📅 TRACK DAYS: 05 of 30

## `✅ Day 05 : Linked Lists - Types`

</br>

## 📑 Contents :

- Data Structures and Algorithms

  - `Linked Lists : Types`
    - Singly Linked List
    - Doubly Linked List
    - Circular Linked List

</br>

### 🧱 Linked Lists : Definition

- Linked lists are data structures that consist of a sequence of elements, where each element points to the next one in the sequence.
- There are several types of linked lists, and each has its own characteristics.

### 🧱 Linked Lists : Types

#### 1️⃣ Singly Linked List :-

- **Definition :** A singly linked list is a collection of nodes where each node contains data and a pointer/reference to the next node in the sequence.

- **Uses :** Singly linked lists are useful when you need a dynamic and easily modifiable list, especially when the size of the list is not fixed.

- **Code :**

  ```cpp
  struct Node {
    int data;
    Node* next;
  };

  ```

#### 2️⃣ Doubly Linked List :-

- **Definition :** A doubly linked list is similar to a singly linked list but each node contains a pointer/reference to both the next and the previous nodes.

- **Uses :** Doubly linked lists are useful when you need to traverse the list in both directions, as it allows for easy backward traversal.

- **Code :**

  ```cpp
  struct Node {
      int data;
      Node* next;
      Node* prev;
  };

  ```

#### 3️⃣ Circular Linked List :-

- **Definition :** A circular linked list is a variation where the last node points back to the first node, forming a circle.

- **Uses :** Circular linked lists are helpful in applications where continuous rotation or circular movement is involved.

- **Code :**

  ```cpp
  struct Node {
    int data;
    Node* next;
  };

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
