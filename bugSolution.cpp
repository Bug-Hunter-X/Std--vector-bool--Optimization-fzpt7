#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic usage of std::vector<bool>
  std::vector<bool> boolVector(1000000); // Consumes more memory than expected

  // More efficient alternatives:
  std::bitset<1000000> bitsetVector;   // Space-efficient for booleans
  std::vector<char> charVector(1000000); // Using char for boolean-like storage (1 byte per boolean)

  std::cout << "Size of boolVector (bytes): " << boolVector.size() * sizeof(bool) << std::endl; // Shows unexpected size
  std::cout << "Size of bitsetVector (bytes): " << bitsetVector.size() << std::endl; 
  std::cout << "Size of charVector (bytes): " << charVector.size() * sizeof(char) << std::endl;

  return 0;
}
