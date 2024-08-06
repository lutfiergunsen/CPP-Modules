#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fix;
        static const int x = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float i);
        ~Fixed();

        Fixed(const Fixed& cpy);
        Fixed &operator=(const Fixed &src);

        bool operator<(Fixed const &src);
		bool operator>(Fixed const &src);
		bool operator<=(Fixed const &src);
		bool operator>=(Fixed const &src);
		bool operator==(Fixed const &src);
		bool operator!=(Fixed const &src);

        Fixed operator*(Fixed const &src);
        Fixed operator/(Fixed const &src);

        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();

        static Fixed min(Fixed s1, Fixed s2);
        static Fixed max(Fixed s1, Fixed s2);
        
        float   getRawBits() const;
        void    setRawBits(int const raw);

        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<<(std::ostream &x, const Fixed &y);

#endif