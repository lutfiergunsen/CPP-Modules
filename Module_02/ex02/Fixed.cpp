#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fix = 0;
}

Fixed::~Fixed(){}

Fixed::Fixed(const int i)
{
    this->fix = (i << this->x);
}

Fixed::Fixed(const float i)
{
    this->fix = roundf(i * (1 << x));
}

Fixed::Fixed(const Fixed& cpy)
{
    *this = cpy;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
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

bool Fixed::operator<(const Fixed &src)
{
	return(this->toFloat() < src.toFloat());
}

bool Fixed::operator<=(const Fixed &src)
{
	return(this->toFloat() <= src.toFloat());
}

bool Fixed::operator>(const Fixed &src)
{
	return(this->toFloat() > src.toFloat());
}

bool Fixed::operator>=(const Fixed &src)
{
	return(this->toFloat() >= src.toFloat());
}

bool Fixed::operator==(const Fixed &src)
{
	return(this->toFloat() == src.toFloat());
}

bool Fixed::operator!=(const Fixed &src)
{
	return(this->toFloat() != src.toFloat());
}

Fixed Fixed::operator*(const Fixed &src)
{
	return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed &src)
{
	return (this->toFloat() / src.toFloat());
}

Fixed Fixed::operator++(int)
{
	Fixed a;
	a = this->toFloat();
	this->fix++;
	return (a);
}

Fixed  &Fixed::operator++()
{
	this->fix++;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed a;
	a = this->toFloat();
	this->fix--;
	return (a);
}

Fixed  &Fixed::operator--()
{
	this->fix--;
	return(*this);
}

Fixed Fixed::min(Fixed s1, Fixed s2)
{
    if(s1 < s2)
        return(s1);
    else
        return(s2);
}

Fixed Fixed::max(Fixed s1, Fixed s2)
{
    if(s1 > s2)
        return(s1);
    else
        return(s2);
}

std::ostream& operator<<(std::ostream &x, const Fixed &y)
{
    return(x << y.toFloat());
}