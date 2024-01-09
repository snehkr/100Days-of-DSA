#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSort(vector<int> &arr, int exp)
{
  const int n = arr.size();
  vector<int> output(n, 0);
  vector<int> count(10, 0);

  // Count occurrences of digits at current digit place
  for (int i = 0; i < n; i++)
  {
    count[(arr[i] / exp) % 10]++;
  }

  // Calculate cumulative count
  for (int i = 1; i < 10; i++)
  {
    count[i] += count[i - 1];
  }

  // Build the output array
  for (int i = n - 1; i >= 0; i--)
  {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }

  // Update the original array
  for (int i = 0; i < n; i++)
  {
    arr[i] = output[i];
  }
}

void radixSort(vector<int> &arr)
{
  // Fix: include algorithm header
  int max_element = *std::max_element(arr.begin(), arr.end());

  for (int exp = 1; max_element / exp > 0; exp *= 10)
  {
    countingSort(arr, exp);
  }
}

int main()
{
  vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

  cout << "Original Array: ";
  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;

  radixSort(arr);

  cout << "Sorted Array: ";
  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
