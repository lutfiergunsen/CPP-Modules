#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fix;
        static const int x = 8;
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        Fixed &operator=(const Fixed &src);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif