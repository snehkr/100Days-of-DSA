#include <iostream>

using namespace std;

struct BSTNode
{
  int key;
  BSTNode *left;
  BSTNode *right;

  BSTNode(int val) : key(val), left(nullptr), right(nullptr) {}
};

// Insert a key into the BST
BSTNode *insert(BSTNode *root, int key)
{
  if (!root)
  {
    return new BSTNode(key);
  }

  if (key < root->key)
  {
    root->left = insert(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = insert(root->right, key);
  }

  return root;
}

// In-order traversal of the BST
void inOrderTraversal(BSTNode *root)
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
  // Sample usage of BST
  BSTNode *root = nullptr;
  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);

  // Perform operations on the BST as needed
  cout << "In-order traversal of BST: ";
  inOrderTraversal(root);
  cout << endl;

  return 0;
}
