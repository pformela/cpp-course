#include <iostream>

int addNumbers(int x, int y)
{
  int sum = x + y;
  return sum;
}

int multiplyNumbers(int x, int y)
{
  return x * y;
}

int main()
{
  int first_number{3}; // statement
  int second_number{7};

  std::cout << "First number: " << first_number << std::endl;
  std::cout << "Second number: " << second_number << std::endl;

  int sum = first_number + second_number; // statement

  std::cout << "Sum: " << sum << std::endl;

  sum = addNumbers(25, 7); // statement

  std::cout << "Sum: " << sum << std::endl;

  std::cout << "Sum: " << addNumbers(3, 42) << std::endl;
  std::cout << "Sum: " << multiplyNumbers(3, 42) << std::endl;

  return 0;
}