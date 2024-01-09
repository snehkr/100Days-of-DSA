#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSort(vector<int> &arr)
{
  int max_element = *std::max_element(arr.begin(), arr.end());

  vector<int> count(max_element + 1, 0);

  // Count occurrences of each element
  for (int i : arr)
  {
    count[i]++;
  }

  // Update the array with sorted values
  int index = 0;
  for (int i = 0; i <= max_element; i++)
  {
    while (count[i] > 0)
    {
      arr[index++] = i;
      count[i]--;
    }
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

  countingSort(arr);

  cout << "Sorted Array: ";
  for (int i : arr)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
