#include "serialize.hpp"
#include <iostream>

int main(void){
	Data data = {0, 1};

	// Test 1 (Serialize)
	std::cout << Serialize::serialize(&data) << "	: " << &data <<std::endl;

	// Test 2 (Deserialize)
	Data *ptr = Serialize::deserialize(Serialize::serialize(&data));
	std::cout << ptr << "	: " << &data << std::endl;

	// Test 3 (data after serialize and deserialize)
	std::cout << std::endl << (ptr == &data ? "The same pointer"	: "pointers are differ") << std::endl;
	std::cout << "data (x) : " << (&data)->X << "	ptr (x) : " << ptr->X << std::endl;
	std::cout << "data (y) : " << (&data)->Y << "	ptr (y) : " << ptr->Y << std::endl;
}
