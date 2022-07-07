/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:02:44 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 03:04:55 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private :
		int			_vf;
		static const int	_bit = 8;
	public :
		Fixed(void);
		Fixed(const Fixed &fix);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		
		Fixed	&operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		int		toInt(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &fix);

#endif
