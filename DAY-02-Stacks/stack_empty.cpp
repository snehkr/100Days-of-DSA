#include <iostream>
#include <stack>

using namespace std;

// Function to check if the stack is empty
bool isEmpty(stack<int> &myStack)
{
  return myStack.empty();
}

int main()
{
  stack<int> myStack;

  cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

  // Assume some elements are pushed onto the stack
  myStack.push(10);
  myStack.push(20);
  myStack.push(30);

  cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

  myStack.pop();
  myStack.pop();
  myStack.pop();

  cout << "Is the stack empty? " << (isEmpty(myStack) ? "Yes" : "No") << endl;

  return 0;
}
