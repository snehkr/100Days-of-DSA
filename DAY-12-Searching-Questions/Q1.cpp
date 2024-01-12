// Given an array containing n distinct numbers taken from 0 to n, find the one that is missing from the array.

#include <iostream>

int findMissingNumber(int arr[], int n)
{
  int total = (n + 1) * (n + 2) / 2;
  for (int i = 0; i < n; i++)
  {
    total -= arr[i];
  }
  return total;
}

int main()
{
  int arr[] = {3, 0, 1, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::cout << "Missing Number: " << findMissingNumber(arr, n) << std::endl;
  return 0;
}
