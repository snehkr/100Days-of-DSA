#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int current = arr[i];
    int j = i - 1;
    while (arr[j] > current && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
}

int main()
{
  int arr[] = {45, 14, 35, 22, 71};
  int n = sizeof(arr) / sizeof(int);

  insertion_sort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}