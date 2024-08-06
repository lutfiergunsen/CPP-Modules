#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fix = 0;
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fix = (i << this->x);
}

Fixed::Fixed(const float i)
{
    std::cout << "Float constructor called" << std::endl;
    this->fix = roundf(i * (1 << x));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->fix = src.getRawBits();
	return (*this);
}

float Fixed::getRawBits() const
{
    return(this->fix);
}

void Fixed::setRawBits(int const raw)
{
    this->fix = raw;
}

int Fixed::toInt(void) const
{
    return(this->fix >> x);
}

float Fixed::toFloat(void) const
{
    return((float)this->fix / (1 << this->x));
}

std::ostream& operator<<(std::ostream &x, const Fixed &y)
{
    return(x << y.toFloat());
}