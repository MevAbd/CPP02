/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:20:19 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 05:45:32 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	this->_vf = rhs.getRawBits();
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->_vf++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	bef(*this);
	
	this->_vf++;
	return (bef);
}

Fixed	&Fixed::operator--(void)
{
	this->_vf--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	bef(*this);
	
	this->_vf--;
	return (bef);
}
Fixed	Fixed::operator+(const Fixed &rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator>(const Fixed &rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(const Fixed &rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

bool	Fixed::operator==(const Fixed &rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

Fixed	&Fixed::min

std::ostream	&operator<<(std::ostream & o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}
