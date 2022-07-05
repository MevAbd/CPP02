#include "Fixed.class.hpp"

Fixed::Fixed(void) : _vf(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ; 
}

Fixed::Fixed(const int n) : _vf(n << _bit)
{
	std::cout << "Int constructor called" << std::endl;
	return ;	
}

Fixed::Fixed(const float n) : _vf((int)roundf(n * (1 << _bit)))
{
	std::cout << "Float constructor called" << std::endl;
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

int	Fixed::toInt(void)const
{
	return (this->_vf >> this->_bit);
}

float	Fixed::toFloat(void)const
{
	return ((float)_vf / (1 << _bit));
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->_vf = fix.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
