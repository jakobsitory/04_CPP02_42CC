/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:30 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:22:31 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/**
 * @brief Converts the fixed-point number to a float.
 * 
 * @return float - The floating-point representation of the fixed-point number.
 */
float	Fixed::toFloat(void) const
{
	float num;

	double scale = std::pow(2, this->_fractional_bits);
	num = static_cast<float>(this->_value / scale);

	return num;
}

/**
 * @brief Converts the fixed-point number to an integer.
 * 
 * @return int - The integer representation of the fixed-point number.
 */
int		Fixed::toInt(void) const
{
	int num;

	double scale = std::pow(2, this->_fractional_bits);
	num = static_cast<int>(this->_value / scale);

	return num;
}

/**
 * @brief Overloads the insertion operator for Fixed objects.
 * 
 * @param os std::ostream& - The output stream.
 * @param fixed_num const Fixed& - The Fixed object to output.
 * @return std::ostream& - The output stream.
 */
std::ostream& operator<<(std::ostream& os, const Fixed& fixed_num)
{
	os << fixed_num.toFloat();
	return os;
}

/**
 * @brief Gets the raw bits of the fixed-point number.
 * 
 * @return int - The raw bits of the fixed-point number.
 */
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

/**
 * @brief Sets the raw bits of the fixed-point number.
 * 
 * @param raw int - The raw bits to set.
 */
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

/**
 * @brief Constructor for initializing a Fixed object with an integer.
 * 
 * @param num int - The integer to initialize the Fixed object with.
 */
Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	double scale = std::pow(2, this->_fractional_bits);
	this->_value = static_cast<int>(num * scale);
}

/**
 * @brief Constructor for initializing a Fixed object with a float.
 * 
 * @param num float - The float to initialize the Fixed object with.
 */
Fixed::Fixed(const float num) : _value (roundf(num * (1 << _fractional_bits))){
}

/**
 * @brief Copy constructor.
 * 
 * @param original Fixed& - The original Fixed object to copy.
 */
Fixed::Fixed(Fixed const & original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = original.getRawBits();
}

/**
 * @brief Default constructor.
 */
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;

	this->_value = 0;
}

/**
 * @brief Destructor.
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
 * @brief Copy assignment operator.
 * 
 * @param origin const Fixed& - The original Fixed object to assign from.
 * @return Fixed& - A reference to the assigned Fixed object.
 */
Fixed& Fixed::operator= (const Fixed &origin)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &origin )
		this->_value = origin.getRawBits();
	return *this;
}