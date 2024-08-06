#include "Brain.hpp"

Brain::Brain ( void )
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain ( const Brain &src )
{
	std::cout << "Brain copy constructor called\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain ( void )
{
	std::cout << "Brain destructor called\n";
}

void	Brain::setBrain( int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string	Brain::getBrain( int index )
{
	return ( this->_ideas[index] );
}

Brain &Brain::operator=( const Brain &src )
{
	std::cout << "Brain assigment operator called\n";
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}
