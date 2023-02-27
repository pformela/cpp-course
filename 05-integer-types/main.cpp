#include <iostream>

int main()
{
  // braced initialization
  int elephant_count; // may contain any integer value

  int lion_count{}; // initializes to 0

  int dog_count{10};

  int cat_count{15};

  int domesticated_animals{dog_count + cat_count};

  // int narrowing_conversion_braced{2.9}; // compiler error

  // std::cout << "Elephant count: " << elephant_count << std::endl;
  // std::cout << "Lion count: " << lion_count << std::endl;
  // std::cout << "Cat count: " << cat_count << std::endl;
  // std::cout << "Dog count: " << dog_count << std::endl;
  // std::cout << "Domesticated animals: " << domesticated_animals << std::endl;

  // functional initialization
  int apple_count(5);
  int orange_count(10);
  int fruit_count(apple_count + orange_count);

  // information lost in narrowing conversion
  // int narrowing_conversion_functional(2.9);

  // std::cout << "Apple count: " << apple_count << std::endl;
  // std::cout << "Orange count: " << orange_count << std::endl;
  // std::cout << "Fruit count: " << fruit_count << std::endl;
  // std::cout << "Narrowing conversion: " << narrowing_conversion_functional << std::endl;

  // assignment notation
  int bike_count = 5;
  int car_count = 10;
  int vehicle_count = bike_count + car_count;
  // int narrowing_conversion_assignment = 2.9;

  std::cout << "Bike count: " << bike_count << std::endl;
  std::cout << "Car count: " << car_count << std::endl;
  std::cout << "Vehicle count: " << vehicle_count << std::endl;
  // std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

  // checking the size with sizeof
  std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "Size of car_count: " << sizeof(car_count) << " bytes" << std::endl;

  return 0;
}