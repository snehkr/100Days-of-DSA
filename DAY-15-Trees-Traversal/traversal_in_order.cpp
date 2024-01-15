#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(Node *node)
{
  if (node != nullptr)
  {
    inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
  }
}

int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  cout << "In-order Traversal: ";
  inOrderTraversal(root);

  return 0;
}