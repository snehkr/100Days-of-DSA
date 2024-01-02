#include <iostream>
#include <stack>

using namespace std;

int main()
{
  // Creating a stack
  stack<int> myStack;

  // Pushing elements onto the stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  // Displaying the top element
  cout << "Top element: " << myStack.top() << endl;

  // Popping the top element
  myStack.pop();

  // Displaying the top element after popping
  cout << "Top element after pop: " << myStack.top() << endl;

  // Checking if the stack is empty
  if (myStack.empty())
  {
    cout << "Stack is empty." << endl;
  }
  else
  {
    cout << "Stack is not empty." << endl;
  }

  // Displaying the size of the stack
  cout << "Stack size: " << myStack.size() << endl;

  return 0;
}
