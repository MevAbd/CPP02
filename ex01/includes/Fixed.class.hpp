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
		Fixed	&operator=(const Fixed &fix); 
		int	getRawBits(void) const;
		int	toInt(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &fix);

#endif
