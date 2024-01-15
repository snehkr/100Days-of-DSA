## 📅 TRACK DAYS: 15 of 30

## `✅ Day 15 : Trees - Traversal Algorithms`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Trees : Traversal Algorithms`
    - Definition
    - Types
      - in-order
      - pre-order
      - post-order

</br>

### 🌳 Trees - Traversal Algorithms :-

- **Definition :**

  - Tree traversal algorithms are used to visit and process each node in a tree data structure.

  - The three main types of tree traversal are :

    - in-order
    - pre-order
    - post-order

  - These terms refer to the order in which nodes are visited during the traversal.

#### 1️⃣ In-order Traversal :-

- **Definition :**

  - In in-order traversal, the left subtree is visited first, then the root node, and finally the right subtree.

- **Syntax :**

  ```cpp

  inOrderTraversal(node) {
      if (node != nullptr) {
          inOrderTraversal(node->left);
          // Process current node
          cout << node->data << " ";
          inOrderTraversal(node->right);
      }
  }

  ```

- **Code Example :**

  ```cpp

  #include <iostream>

  using namespace std;

  struct Node {
      int data;
      Node* left;
      Node* right;

      Node(int value) : data(value), left(nullptr), right(nullptr) {}
  };

  void inOrderTraversal(Node* node) {
      if (node != nullptr) {
          inOrderTraversal(node->left);
          cout << node->data << " ";
          inOrderTraversal(node->right);
      }
  }

  int main() {
      Node* root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left = new Node(4);
      root->left->right = new Node(5);

      cout << "In-order Traversal: ";
      inOrderTraversal(root);

      return 0;
  }

  ```

#### 2️⃣ Pre-order Traversal :-

- **Definition :**

  - In pre-order traversal, the root node is visited first, followed by the left subtree and then the right subtree.

- **Syntax :**

  ```cpp

  preOrderTraversal(node) {
      if (node != nullptr) {
          // Process current node
          cout << node->data << " ";
          preOrderTraversal(node->left);
          preOrderTraversal(node->right);
      }
  }


  ```

- **Code Example :**

  ```cpp

  #include <iostream>

  using namespace std;

  struct Node {
      int data;
      Node* left;
      Node* right;

      Node(int value) : data(value), left(nullptr), right(nullptr) {}
  };

  void preOrderTraversal(Node* node) {
      if (node != nullptr) {
          cout << node->data << " ";
          preOrderTraversal(node->left);
          preOrderTraversal(node->right);
      }
  }

  int main() {
      Node* root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left = new Node(4);
      root->left->right = new Node(5);

      cout << "Pre-order Traversal: ";
      preOrderTraversal(root);

      return 0;
  }

  ```

#### 3️⃣ Post-order Traversal :-

- **Definition :**

  - An AVL tree is a self-balancing binary search tree, where the height difference between the left and right subtrees of any node is at most 1.

- **Syntax :**

  ```cpp

  postOrderTraversal(node) {
      if (node != nullptr) {
          postOrderTraversal(node->left);
          postOrderTraversal(node->right);
          // Process current node
          cout << node->data << " ";
      }
  }

  ```

- **Code Example :**

  ```cpp

  #include <iostream>

  using namespace std;

  struct Node {
      int data;
      Node* left;
      Node* right;

      Node(int value) : data(value), left(nullptr), right(nullptr) {}
  };

  void postOrderTraversal(Node* node) {
      if (node != nullptr) {
          postOrderTraversal(node->left);
          postOrderTraversal(node->right);
          cout << node->data << " ";
      }
  }

  int main() {
      Node* root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left = new Node(4);
      root->left->right = new Node(5);

      cout << "Post-order Traversal: ";
      postOrderTraversal(root);

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
