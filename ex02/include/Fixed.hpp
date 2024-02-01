/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:11 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 11:24:17 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_fractional_bits = 8;
	
public:
	Fixed(void);
	Fixed(Fixed const & origin);
	~Fixed();
	Fixed& operator = (const Fixed &origin);

	Fixed(int const num);
	Fixed(float const num);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	bool	operator<(const Fixed& fixed_num) const;
	bool	operator>(const Fixed& fixed_num) const;
	bool	operator>=(const Fixed& fixed_num) const;
	bool	operator<=(const Fixed& fixed_num) const;
	bool	operator==(const Fixed& fixed_num) const;
	bool	operator!=(const Fixed& fixed_num) const;

	Fixed&	operator+(const Fixed& fixed_num) const;
	Fixed&	operator-(const Fixed& fixed_num) const;
	Fixed&	operator*(const Fixed& fixed_num) const;
	Fixed&	operator/(const Fixed& fixed_num) const;

	Fixed	operator++(int);
	Fixed&	operator++(void);
	Fixed	operator--(int);
	Fixed&	operator--(void);


	static Fixed&		min(Fixed& fixed_num_1, Fixed& fixed_num_2);
	static const Fixed&	min(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
	static Fixed&		max(Fixed& fixed_num_1, Fixed& fixed_num_2);
	static const Fixed&	max(const Fixed& fixed_num_1, const Fixed& fixed_num_2);

};

	std::ostream& operator<<(std::ostream & os, const Fixed& fixed_num);

#endif