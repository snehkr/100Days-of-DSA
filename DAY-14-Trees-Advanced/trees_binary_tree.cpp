#include <iostream>

using namespace std;

struct TreeNode
{
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform in-order traversal of the binary tree
void inOrderTraversal(TreeNode *root)
{
  if (root)
  {
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
  }
}

// Function to perform pre-order traversal of the binary tree
void preOrderTraversal(TreeNode *root)
{
  if (root)
  {
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
  }
}

// Function to perform post-order traversal of the binary tree
void postOrderTraversal(TreeNode *root)
{
  if (root)
  {
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
  }
}

int main()
{
  // Sample usage of binary tree
  TreeNode *root = new TreeNode(1);
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(5);

  // Perform operations on the binary tree as needed
  cout << "In-order traversal: ";
  inOrderTraversal(root);
  cout << endl;

  cout << "Pre-order traversal: ";
  preOrderTraversal(root);
  cout << endl;

  cout << "Post-order traversal: ";
  postOrderTraversal(root);
  cout << endl;

  return 0;
}
