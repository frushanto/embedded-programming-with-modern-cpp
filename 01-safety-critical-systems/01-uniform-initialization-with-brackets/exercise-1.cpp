#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>

int main() {
  // your code goes here
  std::cout << std::endl;
  std::array<int, 5> myArray = {-10, 5, 1, 4, 5};
  for (auto i: myArray) 
    std::cout << i << " ";
  std::cout << "\n\n";
  
  std::vector<int> myVector{-10, 5, 1, 4, 5};
  for (auto i: myVector)
    std::cout << i << " ";
  std::cout << "\n\n";

  std::set<int> mySet = {-10, 5, 1, 4, 5};
  for (auto i: mySet)
    std::cout << i << " ";
  std::cout << "\n\n";

  std::unordered_multiset<int> myMultiset{-10, 5, 1, 4, 5};
  for (auto i: myMultiset)
    std::cout << i << " ";
  std::cout << "\n\n";

  std::cout << "Hello World";
  return 0;
}