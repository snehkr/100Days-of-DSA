#include <iostream>
#include <stack>

using namespace std;

// Function to pop an element from the stack
void popElement(stack<int> &myStack)
{
  if (!myStack.empty())
  {
    cout << "Popped: " << myStack.top() << endl;
    myStack.pop();
  }
  else
  {
    cout << "Stack is empty. Cannot pop." << endl;
  }
}

int main()
{
  stack<int> myStack;

  // Assume some elements are pushed onto the stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  popElement(myStack);
  popElement(myStack);
  popElement(myStack);
  popElement(myStack); // Attempting to pop from an empty stack

  return 0;
}
