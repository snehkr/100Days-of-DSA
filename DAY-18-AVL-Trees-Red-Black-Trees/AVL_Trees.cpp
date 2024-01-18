#include <iostream>
#include <algorithm>
using namespace std;

struct AVLNode
{
  int key;
  AVLNode *left;
  AVLNode *right;
  int height;
};

class AVLTree
{
public:
  AVLNode *root;

  AVLTree() : root(nullptr) {}

  int getHeight(AVLNode *node)
  {
    if (node == nullptr)
      return 0;
    return node->height;
  }

  int getBalance(AVLNode *node)
  {
    if (node == nullptr)
      return 0;
    return getHeight(node->left) - getHeight(node->right);
  }

  AVLNode *rotateRight(AVLNode *y)
  {
    AVLNode *x = y->left;
    AVLNode *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
  }

  AVLNode *rotateLeft(AVLNode *x)
  {
    AVLNode *y = x->right;
    AVLNode *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
  }

  AVLNode *insert(AVLNode *node, int key)
  {
    // Insertion logic here...

    // Update height of current node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // Perform rotation if needed
    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && key < node->left->key)
      return rotateRight(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
      return rotateLeft(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
      node->left = rotateLeft(node->left);
      return rotateRight(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
      node->right = rotateRight(node->right);
      return rotateLeft(node);
    }

    return node;
  }
};
