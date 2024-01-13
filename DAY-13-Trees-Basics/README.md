## 📅 TRACK DAYS: 13 of 30

## `✅ Day 13 : Trees - Basics`

</br>

## 📑 Contents :

- Data Structures and Algorithms
  - `Trees : Basics`
    - Definition
    - Types
      - Binary Tree
      - Binary Search Tree (BST)
      - AVL Tree
      - Heap

</br>

### 🌳 Trees Basics :-

- **Definition :**

  - A tree is a hierarchical data structure that consists of nodes connected by edges.

  - Each node in a tree has a parent-child relationship with other nodes, except for the root node, which has no parent.

  - The node at the top of the hierarchy is called the root, and nodes with no children are called leaves.

  - The level of a node is its distance from the root, and the height of a tree is the maximum level of any node.

#### 1️⃣ Binary Tree :-

- **Definition :**

  - A binary tree is a tree in which each node has at most two children, referred to as the left child and the right child.

- **Time Complexity :**

  - `Access/Search/Insert/Delete` O(log n) in average case for a balanced binary tree
  - O(n) in the `worst case` for an unbalanced binary tree.

- **Algorithm Steps :**

  - Initialize a structure for the tree node containing data, left, and right pointers.

  - Create nodes and connect them as needed.

- **Syntax :**

  ```cpp
    struct TreeNode {
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    };

  ```

- **Code :**

  ```cpp
    // Creating a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

  ```

#### 2️⃣ Binary Search Tree :-

- **Definition :**

  - A binary search tree is a binary tree in which the left subtree of each node contains only nodes with values less than the node's value, and the right subtree contains only nodes with values greater than the node's value.

- **Time Complexity :**

  - `Access/Search/Insert/Delete` O(log n) on average

  - O(n) in the `worst case` for a skewed tree

- **Algorithm Steps :**

  - Start at the root.

  - If the value to be inserted is less than the current node, go to the left subtree. If greater, go to the right subtree.

  - Repeat until an empty spot is found, then insert the new node.

- **Syntax :**

  ```cpp
    Same as Binary Tree
  ```

- **Code :**

  ```cpp
    // Creating a binary search tree
    TreeNode* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);

  ```

#### 3️⃣ AVL Tree :-

- **Definition :**

  - An AVL tree is a self-balancing binary search tree, where the height difference between the left and right subtrees of any node is at most 1.

- **Time Complexity :**

  - `Access/Search/Insert/Delete` O(log n) on average

  - O(n) in the `worst case` for a skewed tree

- **Algorithm Steps :**

  - Standard BST operations with additional rotations to maintain balance.

  - Four types of rotations:
    - Left-Left
    - Right-Right
    - Left-Right
    - Right-Left.

- **Syntax :**

  ```cpp
    Same as Binary Search Tree
  ```

- **Code :**

  ```cpp
    // Creating an AVL tree
    AVLTreeNode* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);

  ```

#### 4️⃣ Heap Tree :-

- **Definition :**

  - A heap is a specialized tree-based data structure that satisfies the heap property.

  - In a max heap, for any given node C, if P is a parent node of C, then the key of P is greater than or equal to the key of C.

- **Time Complexity :**

  - `Access/Insert :` O(1)

  - `Delete (Max) :` O(log n)

- **Algorithm Steps :**

  - Add elements to the end and perform "heapify-up" to maintain the heap property.

  - Remove the root, replace it with the last element, and perform "heapify-down."

- **Syntax :**

  ```cpp
    Implemented using arrays or custom structures
  ```

- **Code :**

  ```cpp
    // Creating a max heap
    std::vector<int> maxHeap = {10, 7, 5, 2, 1, 8};
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
