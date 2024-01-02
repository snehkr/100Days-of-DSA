#include <iostream>
#include <stack>

using namespace std;

// Function to push an element onto the stack
void pushElement(stack<int> &myStack, int element)
{
  myStack.push(element);
  cout << "Pushed: " << element << endl;
}

int main()
{
  stack<int> myStack;

  int elementToPush = 42;

  pushElement(myStack, elementToPush);

  return 0;
}
