#include <iostream>
#include <stack>

using namespace std;

class Stack
{
private:
  stack<int> myStack;

public:
  // Function to push an element onto the stack
  void push(int value)
  {
    myStack.push(value);
    cout << "Pushed: " << value << endl;
  }

  // Function to pop an element from the stack
  void pop()
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

  // Function to get the top element of the stack
  void top()
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

  // Function to check if the stack is empty
  void isEmpty()
  {
    if (myStack.empty())
    {
      cout << "Stack is empty." << endl;
    }
    else
    {
      cout << "Stack is not empty." << endl;
    }
  }
};

int main()
{
  Stack myStack;

  myStack.push(5);
  myStack.push(10);
  myStack.push(15);

  myStack.top();
  myStack.pop();
  myStack.top();

  myStack.isEmpty();

  return 0;
}
