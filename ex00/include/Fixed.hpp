/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:11 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 11:19:41 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_fractional_bits = 8;
public:
	Fixed(void);
	Fixed(Fixed & origin);
	Fixed & operator = (const Fixed &origin);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif