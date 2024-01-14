#include <iostream>
#include <algorithm>

using namespace std;

struct AVLNode
{
  int key;
  int height;
  AVLNode *left;
  AVLNode *right;

  AVLNode(int val) : key(val), height(1), left(nullptr), right(nullptr) {}
};

// Get the height of a node
int getHeight(AVLNode *node)
{
  return node ? node->height : 0;
}

// Get the balance factor of a node
int getBalance(AVLNode *node)
{
  return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

// Update the height of a node
void updateHeight(AVLNode *node)
{
  if (node)
  {
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
  }
}

// Right rotate a subtree rooted with y
AVLNode *rightRotate(AVLNode *y)
{
  AVLNode *x = y->left;
  AVLNode *T2 = x->right;

  // Perform rotation
  x->right = y;
  y->left = T2;

  // Update heights
  updateHeight(y);
  updateHeight(x);

  return x;
}

// Left rotate a subtree rooted with x
AVLNode *leftRotate(AVLNode *x)
{
  AVLNode *y = x->right;
  AVLNode *T2 = y->left;

  // Perform rotation
  y->left = x;
  x->right = T2;

  // Update heights
  updateHeight(x);
  updateHeight(y);

  return y;
}

// Insert a key into the AVL tree
AVLNode *insert(AVLNode *root, int key)
{
  // Perform standard BST insertion
  if (!root)
  {
    return new AVLNode(key);
  }

  if (key < root->key)
  {
    root->left = insert(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = insert(root->right, key);
  }
  else
  {
    // Duplicate keys are not allowed in AVL trees
    return root;
  }

  // Update height of current node
  updateHeight(root);

  // Get the balance factor
  int balance = getBalance(root);

  // Left Left Case
  if (balance > 1 && key < root->left->key)
  {
    return rightRotate(root);
  }

  // Right Right Case
  if (balance < -1 && key > root->right->key)
  {
    return leftRotate(root);
  }

  // Left Right Case
  if (balance > 1 && key > root->left->key)
  {
    root->left = leftRotate(root->left);
    return rightRotate(root);
  }

  // Right Left Case
  if (balance < -1 && key < root->right->key)
  {
    root->right = rightRotate(root->right);
    return leftRotate(root);
  }

  // Return the unchanged root
  return root;
}

// Utility function to perform an in-order traversal of the AVL tree
void inOrderTraversal(AVLNode *root)
{
  if (root)
  {
    inOrderTraversal(root->left);
    cout << root->key << " ";
    inOrderTraversal(root->right);
  }
}

int main()
{
  // Sample usage of AVL tree
  AVLNode *root = nullptr;
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);

  // Perform operations on the AVL tree as needed
  cout << "In-order traversal of AVL tree: ";
  inOrderTraversal(root);
  cout << endl;

  return 0;
}
