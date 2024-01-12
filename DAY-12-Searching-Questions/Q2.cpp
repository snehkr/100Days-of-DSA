// Write a C++ program to check if two strings are anagrams.

#include <iostream>
#include <algorithm>

bool areAnagrams(std::string str1, std::string str2)
{
  std::sort(str1.begin(), str1.end());
  std::sort(str2.begin(), str2.end());
  return str1 == str2;
}

int main()
{
  std::string s1 = "listen";
  std::string s2 = "silent";
  std::cout << "Are Anagrams: " << (areAnagrams(s1, s2) ? "Yes" : "No") << std::endl;
  return 0;
}
