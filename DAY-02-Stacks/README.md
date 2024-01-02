## 📅 TRACK DAYS: 02 of 30

## `✅ Day 02 : Stacks - Algorithms & Code`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Stack Operations`
    - Push
    - Pop
    - Top (or Peek)
    - Empty
    - Size

</br>

### 🧱 STACK : Definition

- A stack is a linear data structure that follows the Last In, First Out (LIFO) principle.
- This means that the last element added to the stack is the first one to be removed.
- A stack can be visualized as a collection of elements with two main operations: push and pop.

### 🧱 STACK : Basic Operations

#### 1️⃣ Push Operation :-

- **Operation :** Adds an element to the top of the stack.
- **Description :** The element is inserted at the top of the stack, becoming the new top element.

- **Algorithm :**

  ```md
  Algorithm Push(stack, element):

  1.  Push the 'element' onto the 'stack'.
  ```

- **Code :**

  ```cpp
  #include <iostream>
  #include <stack>

  using namespace std;

  // Function to push an element onto the stack
  void pushElement(stack<int>& myStack, int element) {
      myStack.push(element);
      cout << "Pushed: " << element << endl;
  }

  int main() {
      stack<int> myStack;

      int elementToPush = 42;

      pushElement(myStack, elementToPush);

      return 0;
  }
  ```

#### 2️⃣ Pop Operations :-

- **Operation :** Removes the element from the top of the stack.

- **Description :** The top element is removed from the stack. If the stack is not empty, this operation returns the removed element.

- **Algorithm :**

  ```md
  Algorithm Pop(stack):

      1. If the 'stack' is not empty:
          - Pop the top element from the 'stack'.
      2. Else:
          - Display an error message (optional) as the stack is empty.
  ```

- **Code :**

  ```cpp
  #include <iostream>
  #include <stack>

  using namespace std;

  // Function to pop an element from the stack
  void popElement(stack<int>& myStack) {
      if (!myStack.empty()) {
          cout << "Popped: " << myStack.top() << endl;
          myStack.pop();
      } else {
          cout << "Stack is empty. Cannot pop." << endl;
      }
  }

  int main() {
      stack<int> myStack;

      // Assume some elements are pushed onto the stack
      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      popElement(myStack);
      popElement(myStack);
      popElement(myStack);
      popElement(myStack);  // Attempting to pop from an empty stack

      return 0;
  }

  ```

#### 3️⃣ Top/Peek Operations :-

- **Operation :** Retrieves the element from the top of the stack without removing it.

- **Description :** Returns the value of the top element without modifying the stack.

- **Algorithm :**

  ```md
  Algorithm Top(stack):

      1.  If the 'stack' is not empty:
          - Return the top element of the 'stack'.
      2.  Else:
          - Display an error message (optional) as the stack is empty.
  ```

- **Code :**

  ```cpp
  #include <iostream>
  #include <stack>

  using namespace std;

  // Function to get the top element from the stack
  void getTopElement(stack<int>& myStack) {
      if (!myStack.empty()) {
          cout << "Top element: " << myStack.top() << endl;
      } else {
          cout << "Stack is empty. No top element." << endl;
      }
  }

  int main() {
      stack<int> myStack;

      // Assume some elements are pushed onto the stack
      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      getTopElement(myStack);

      myStack.pop();
      getTopElement(myStack);

      myStack.pop();
      myStack.pop();
      getTopElement(myStack);  // Attempting to get the top element from an empty stack

      return 0;
  }


  ```

#### 4️⃣ Empty Operations :-

- **Operation :** Checks if the stack is empty.

- **Description :** Returns true if the stack has no elements; otherwise, returns false.

- **Algorithm :**

  ```md
  Algorithm IsEmpty(stack):

      1. If the 'stack' is empty:
        - Return true.
      2. Else:
        - Return false.
  ```

- **Code :**

  ```cpp
  #include <iostream>
  #include <stack>

  using namespace std;

  // Function to check if the stack is empty
  bool isEmpty(stack<int>& myStack) {
      return myStack.empty();
  }

  int main() {
      stack<int> myStack;

      cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

      // Assume some elements are pushed onto the stack
      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

      myStack.pop();
      myStack.pop();
      myStack.pop();

      cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

      return 0;
  }


  ```

#### 5️⃣ Size Operations :-

- **Operation :** Returns the number of elements in the stack.

- **Description :** Returns the count of elements currently present in the stack.

- **Algorithm :**

  ```md
  Algorithm Size(stack):

      1.  Return the size of the 'stack'.
  ```

- **Code :**

  ```cpp
  #include <iostream>
  #include <stack>

  using namespace std;

  // Function to get the size of the stack
  int getSize(stack<int>& myStack) {
      return myStack.size();
  }

  int main() {
      stack<int> myStack;

      cout << "Size of the stack: " << getSize(myStack) << endl;

      // Assume some elements are pushed onto the stack
      myStack.push(10);
      myStack.push(20);
      myStack.push(30);

      cout << "Size of the stack: " << getSize(myStack) << endl;

      myStack.pop();
      myStack.pop();

      cout << "Size of the stack: " << getSize(myStack) << endl;

      return 0;
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
