// Write a C++ program to find the maximum element in an array.

#include <iostream>

int main()
{
  int arr[] = {5, 2, 8, 9, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int maxElement = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] > maxElement)
    {
      maxElement = arr[i];
    }
  }
  std::cout << "Maximum Element: " << maxElement << std::endl;
  return 0;
}
