# std::vector<bool> Optimization

This example demonstrates a common performance issue when using `std::vector<bool>` in C++.  `std::vector<bool>` is specialized to use only a bit per boolean value, but this specialization can lead to unexpected and inefficient behavior in certain cases.

**Problem:** The code creates a large `std::vector<bool>` which consumes significantly more memory than expected when using a regular `std::vector<int>` or `std::vector<char>`. This inefficiency is due to the fact that `std::vector<bool>` is often implemented using a bitset rather than allocating a single byte per bool.  This is intended for space efficiency but may introduce unexpected overheads in certain operations.

**Solution:** For performance-critical applications, use `std::bitset` which is optimized for space and some operations, or a regular vector (`std::vector<int>` or `std::vector<char>`)  if a single bit per boolean isn't strictly required.