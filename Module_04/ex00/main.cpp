#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << "type: " << dog->getType() << " " << std::endl;
		std::cout << "type: " << cat->getType() << " " << std::endl;

		dog->makeSound();
		cat->makeSound();
		meta->makeSound();
		delete (meta);
		delete (dog);
		delete (cat);
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;

		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();

		std::cout << "type: " << i->getType() << " " << std::endl;
		std::cout << "type: " << meta->getType() << " " << std::endl;
		std::cout << "Wrong cat sound: "; i->makeSound();
		std::cout << "Wrong Animal sound: "; meta->makeSound();
		delete	i;
		delete	meta;
	}
	return 0;
}
