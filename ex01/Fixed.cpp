/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:30 by jschott           #+#    #+#             */
/*   Updated: 2023/12/22 16:06:05 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

float	Fixed::toFloat(void) const
{
	float num;

	double scale = std::pow(2, this->_fractional_bits);
	num = static_cast<float>(this->_value / scale);

	return num;
}

int		Fixed::toInt(void) const
{
	int num;

	double scale = std::pow(2, this->_fractional_bits);
	num = static_cast<int>(this->_value / scale);

	return num;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed_num)
{
	os << fixed_num.toFloat();
	return os;
}
	
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	double scale = std::pow(2, this->_fractional_bits);
	this->_value = static_cast<int>(num * scale);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	double scale = std::pow(2, this->_fractional_bits);
	this->_value = static_cast<int>(num * scale);
}


Fixed::Fixed(Fixed const & original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = original.getRawBits();
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;

	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &origin)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &origin )
        this->_value = origin.getRawBits();
    return *this;
}