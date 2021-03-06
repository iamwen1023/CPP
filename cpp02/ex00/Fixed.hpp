#ifndef _FIXED_HPP_
# define _FIXED_HPP_
#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &obj);
        Fixed& operator=(const Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
    private:
        int _fp_num;
        static const int _num_fb;
};
# endif