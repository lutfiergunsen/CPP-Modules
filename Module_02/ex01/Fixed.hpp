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
        
        float   getRawBits() const;
        void    setRawBits(int const raw);

        int toInt(void) const;
        float toFloat(void) const;
};

std::ostream& operator<<(std::ostream &x, const Fixed &y);

#endif