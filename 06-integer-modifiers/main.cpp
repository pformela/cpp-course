#include <iostream>

int main()
{
  signed int value1{10};
  signed int value2{-300};

  std::cout << "value1: " << value1 << std::endl;
  std::cout << "value2: " << value2 << std::endl;
  std::cout << "size of value1: " << sizeof(value1) << " bytes" << std::endl;
  std::cout << "size of value2: " << sizeof(value2) << " bytes" << std::endl;

  unsigned int value3{10};
  // unsigned int value4{-5}; // compiler error

  return 0;
}