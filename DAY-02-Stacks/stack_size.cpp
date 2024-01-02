#include <iostream>
#include <stack>

using namespace std;

// Function to get the size of the stack
int getSize(stack<int> &myStack)
{
  return myStack.size();
}

int main()
{
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
