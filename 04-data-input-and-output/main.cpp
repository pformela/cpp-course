#include <iostream>
#include <string>

int main()
{
  /*
  std::cout << "Hello C++20" << std::endl;

  int age{21};
  std::cout << "Age: " << age << std::endl;

  std::cerr << "Error message: Something is wrong" << std::endl;
  std::clog << "Log message: Something happened" << std::endl;
  */

  /*
  int age1;
  std::string name;

  std::cout << "Please enter your name and age: " << std::endl;
  std::cin >> name >> age1;

  std::cout << "Name: " << name << std::endl;
  std::cout << "Age: " << age1 << std::endl;
  */

  // Data with spaces
  std::string full_name;
  int age3;

  std::cout << "Please enter your full name and age: " << std::endl;

  std::getline(std::cin, full_name);
  std::cin >> age3;

  std::cout << "Hello " << full_name << " you are " << age3 << " years old" << std::endl;

  return 0;
}