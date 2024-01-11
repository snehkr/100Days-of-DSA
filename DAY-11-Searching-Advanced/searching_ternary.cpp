#include <iostream>

using namespace std;

int ternarySearch(int arr[], int low, int high, int key)
{
  if (low <= high)
  {
    int mid1 = low + (high - low) / 3;
    int mid2 = high - (high - low) / 3;

    if (arr[mid1] == key)
      return mid1;
    if (arr[mid2] == key)
      return mid2;

    if (key < arr[mid1])
      return ternarySearch(arr, low, mid1 - 1, key);
    else if (key > arr[mid2])
      return ternarySearch(arr, mid2 + 1, high, key);
    else
      return ternarySearch(arr, mid1 + 1, mid2 - 1, key);
  }

  return -1; // Key not found
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 6;

  int result = ternarySearch(arr, 0, n - 1, key);

  if (result != -1)
    cout << "Element found at index " << result << endl;
  else
    cout << "Element not found" << endl;

  return 0;
}