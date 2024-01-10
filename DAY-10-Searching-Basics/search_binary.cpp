#include <iostream>

using namespace std;

int binary_search(int arr[], int n, int key)
{
  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return -1;
}

int main()
{
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 42};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 16;

  int result = binary_search(arr, n, target);
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