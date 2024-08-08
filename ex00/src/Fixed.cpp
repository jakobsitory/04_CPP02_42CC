/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:30 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:20:17 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

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
	this->_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

/**
 * @brief Copy constructor.
 * 
 * @param original Fixed& - The original Fixed object to copy.
 */
Fixed::Fixed(Fixed & original)
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