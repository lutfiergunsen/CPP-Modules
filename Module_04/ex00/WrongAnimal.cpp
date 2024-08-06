#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Wrong Animal constructor called" << std::endl;
	this->_type = "Wrong_animal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "Wrong Animal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &src )
{
	std::cout << "Wrong assigment operator called" << std::endl;
	if (this != &src )
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Animal sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	
	return( this->_type );
}

std::ostream &operator<<( std::ostream &os, const WrongAnimal &object )
{

	os << object.getType();
	return (os);
}
