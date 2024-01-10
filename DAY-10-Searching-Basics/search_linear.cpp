#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 42};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 5;

  int result = linear_search(arr, n, target);
  if (result != -1)
  {
    cout << "Element found at index " << result << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }
  return 0;
}