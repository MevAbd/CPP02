/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:40:54 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/06 22:40:56 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed
{
	private :
		int			_vf;
		static const int	_bit = 8;
	public :
		Fixed(void);
		Fixed(const Fixed &fix);
		~Fixed(void);
		Fixed	&operator=(const Fixed &fix); 
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
