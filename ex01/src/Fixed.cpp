#include "Fixed.class.hpp"

Fixed::Fixed(void) : _vf(0)
{
	return ; 
}

Fixed::Fixed(const int n) : _vf(n << _bit)
{
	return ;	
}

Fixed::Fixed(const float n) : _vf((int)roundf(n * (1 << _bit)))
{
	return ;	
}

Fixed::Fixed(const Fixed &fix)
{
	*this = fix;
	return ; 
}

Fixed::~Fixed(void)
{
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
	if (this != &fix)
		this->_vf = fix.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator+(const Fixed &fix)
{
	return (this->toFloat() + fix->toFloat());
}

Fixed	&Fixed::operator-(const Fixed &fix)
{
	return (this->toFloat() - fix->toFloat());
}

Fixed	&Fixed::operator/(const Fixed &fix)
{
	return (this->toFloat() / fix->toFloat());
}

Fixed	&Fixed::operator*(const Fixed &fix)
{
	return (this->toFloat() * fix->toFloat());
}

Fixed	&Fixed::operator--(const Fixed &fix)
{
	this->_vf--;
	return (this);
}

Fixed	&Fixed::operator++(const Fixed &fix)
{
	this->_vf++;
	return (this);
}

Fixed	&Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_vf++;
	return (tmp);
}

Fixed	&Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_vf--;
	return (tmp);
}
bool	Fixed::operaror>(const Fixed &fix)
{
	return (this->_vf > fix._vf);
}

bool	Fixed::operaror<(const Fixed &fix)
{
	return (this->_vf < fix._vf);
}

bool	Fixed::operaror>=(const Fixed &fix)
{
	return (this->_vf >= fix._vf);
}

bool	Fixed::operaror<=(const Fixed &fix)
{
	return (this->_vf <= fix._vf);
}


bool	Fixed::operaror!=(const Fixed &fix)
{
	return (this->_vf != fix._vf);
}

bool	Fixed::operaror>(const Fixed &fix)
{
	return (this->_vf > fix._vf);
}

std::ostream	&operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
