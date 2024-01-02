#include <iostream>
#include <stack>

using namespace std;

// Function to get the top element from the stack
void getTopElement(stack<int> &myStack)
{
  if (!myStack.empty())
  {
    cout << "Top element: " << myStack.top() << endl;
  }
  else
  {
    cout << "Stack is empty. No top element." << endl;
  }
}

int main()
{
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
  getTopElement(myStack); // Attempting to get the top element from an empty stack

  return 0;
}
