/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:11 by jschott           #+#    #+#             */
/*   Updated: 2023/12/22 16:07:10 by jschott          ###   ########.fr       */
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
	Fixed(int const num);
	Fixed(float const num);
	~Fixed();
	Fixed & operator = (const Fixed &origin);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed_num);

bool	operator<(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
bool	operator>(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
bool	operator>=(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
bool	operator<=(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
bool	operator==(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
bool	operator!=(const Fixed& fixed_num_1, const Fixed& fixed_num_2);

Fixed&	operator+(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
Fixed&	operator-(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
Fixed&	operator*(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
Fixed&	operator/(const Fixed& fixed_num_1, const Fixed& fixed_num_2);

	// Fixed	operator++(const Fixed& fixed_num_1, const Fixed& fixed_num_2);
	// Fixed	operator--(const Fixed& fixed_num_1, const Fixed& fixed_num_2);

#endif