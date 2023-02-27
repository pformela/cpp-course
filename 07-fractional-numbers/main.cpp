#include <iostream>
#include <iomanip>

int main()
{
  float number1{1.12345678901234567890f};
  double number2{1.12345678901234567890};
  long double number3{1.12345678901234567890L};

  std::cout << "sizeof float: " << sizeof(float) << " bytes" << std::endl;
  std::cout << "sizeof double: " << sizeof(double) << " bytes" << std::endl;
  std::cout << "sizeof long double: " << sizeof(long double) << " bytes" << std::endl;

  std::cout << std::setprecision(20) << std::fixed;

  std::cout << "number1: " << number1 << std::endl;
  std::cout << "number2: " << number2 << std::endl;
  std::cout << "number3: " << number3 << std::endl;

  return 0;
}