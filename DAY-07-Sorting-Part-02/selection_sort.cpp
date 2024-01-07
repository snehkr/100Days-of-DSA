#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }
    swap(arr[i], arr[min_index]);
  }
}

int main()
{
  int arr[] = {45, 14, 35, 22, 71};
  int n = sizeof(arr) / sizeof(int);

  selection_sort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}