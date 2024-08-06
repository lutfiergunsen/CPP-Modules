#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain( void );
		virtual ~Brain( void );
		Brain( const Brain &src );

		void		setBrain( int index, std::string idea );
		std::string	getBrain( int index );

		Brain &operator=( const Brain &src );
};

#endif