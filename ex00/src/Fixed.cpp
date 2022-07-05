#include "Fixed.class.hpp"

Fixed::Fixed(void) : _vf(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ; 
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ; 
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ; 
}

void	Fixed::setRawBits(int const raw)
{
	this->_vf = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_vf);
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->_vf = fix.getRawBits();
	return (*this);
}
