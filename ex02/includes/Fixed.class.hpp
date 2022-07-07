/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:20:08 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 04:58:41 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int					_vf;
		static const int	_bit = 8;
	public :
		Fixed(void);
		Fixed(const Fixed &fix);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);

		Fixed	&operator=(const Fixed &rhs); 
		Fixed	&operator++(void); 
		Fixed	operator++(int); 
		Fixed	&operator--(void); 
		Fixed	operator--(int); 
		Fixed	operator+(const Fixed &rhs); 
		Fixed	operator-(const Fixed &rhs); 
		Fixed	operator*(const Fixed &rhs); 
		Fixed	operator/(const Fixed &rhs); 

		bool	operator>(const Fixed &rhs);
		bool	operator<(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		bool	operator>=(const Fixed &rhs);
		bool	operator==(const Fixed &rhs);
		bool	operator!=(const Fixed &rhs);

		int		toInt(void)const;
		int		getRawBits(void) const;

		float	toFloat(void)const;

		void	setRawBits(int const raw);

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);

		const static Fixed	&min(const Fixed &a, const Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream & o, Fixed const &fix);

#endif
