#include <iostream>

int main()
{
	char character1{'a'};
	char character2{97};
	char character3{0x61};
	char character4{0b01100001};

	std::cout << "character1: " << character1 << std::endl;
	std::cout << "character2: " << character2 << std::endl;
	std::cout << "character3: " << character3 << std::endl;
	std::cout << "character4: " << character4 << std::endl;

	return 0;
}