// Write a C++ program to merge two sorted arrays into a single sorted

#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
  std::vector<int> result;
  int i = 0, j = 0;

  while (i < nums1.size() && j < nums2.size())
  {
    if (nums1[i] < nums2[j])
    {
      result.push_back(nums1[i]);
      i++;
    }
    else
    {
      result.push_back(nums2[j]);
      j++;
    }
  }

  while (i < nums1.size())
  {
    result.push_back(nums1[i]);
    i++;
  }

  while (j < nums2.size())
  {
    result.push_back(nums2[j]);
    j++;
  }

  return result;
}

int main()
{
  std::vector<int> nums1 = {1, 3, 5};
  std::vector<int> nums2 = {2, 4, 6};
  std::vector<int> merged = mergeSortedArrays(nums1, nums2);

  std::cout << "Merged Array: ";
  for (int num : merged)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
