#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

void preOrderTraversal(Node *node)
{
  if (node != nullptr)
  {
    cout << node->data << " ";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
  }
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout << "Pre-order Traversal: ";
  preOrderTraversal(root);

  return 0;
}