#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		Animal *animals[5];
		for(int i = 0; i < 5; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for(int i = 0; i < 5; i++)
			delete animals[i];
		std::cout << std::endl << std::endl << std::endl;
	}
	{
		Cat b;
		std::cout << std::endl;
		b.getBrain()->setBrain(0, "one");
		std::cout << std::endl;
		Cat a = b;
		std::cout << std::endl;
		a.getBrain()->setBrain(0, "two");
	}
	return (0);
}