/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:30 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 11:26:54 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/* COMPARISON OPERATOR OVERLOADS */

bool	Fixed::operator<(const Fixed& fixed_num) const {
	return this->getRawBits() < fixed_num.getRawBits();
}

bool	Fixed::operator>(const Fixed& fixed_num) const {
	return this->getRawBits() > fixed_num.getRawBits();
}

bool	Fixed::operator>=(const Fixed& fixed_num) const {
	return this->getRawBits() >= fixed_num.getRawBits();
}

bool	Fixed::operator<=(const Fixed& fixed_num) const {
	return this->getRawBits() <= fixed_num.getRawBits();
}

bool	Fixed::operator==(const Fixed& fixed_num) const {
	return this->getRawBits() == fixed_num.getRawBits();
}

bool	Fixed::operator!=(const Fixed& fixed_num) const {
	return this->getRawBits() != fixed_num.getRawBits();
}

/* ARITHMETIC OPERATOR OVERLOADS */

Fixed&	Fixed::operator+(const Fixed& fixed_num) const {

	int result_raw = this->getRawBits() + fixed_num.getRawBits();

	Fixed *result = new Fixed;
	result->setRawBits(result_raw);
	return (*result);
}

Fixed&	Fixed::operator-(const Fixed& fixed_num) const {

	int result_raw = this->getRawBits() - fixed_num.getRawBits();

	Fixed *result = new Fixed;
	result->setRawBits(result_raw);
	return (*result);
}

Fixed&	Fixed::operator*(const Fixed& fixed_num) const {

	float result_float = this->toFloat() * fixed_num.toFloat();

	Fixed *result = new Fixed (result_float);
	return (*result);
}

Fixed&	Fixed::operator/(const Fixed& fixed_num) const {

	float result_float = this->toFloat() / fixed_num.toFloat();

	Fixed *result = new Fixed (result_float);
	return (*result);
}

/* INCREMENT OPERATOR OVERLOADS */

Fixed Fixed::operator++(int) {

	Fixed temp(*this);
	temp._value = this->_value++;
	return temp;
}

Fixed&	Fixed::operator++(void) {

	++this->_value;
	return *this;
}

Fixed Fixed::operator--(int) {

	Fixed temp(*this);
	temp._value = this->_value--;
	return temp;
}

Fixed&	Fixed::operator--(void) {

	--this->_value;
	return *this;
}

Fixed&	Fixed::min(Fixed& fixed_num_1, Fixed& fixed_num_2){
	if (fixed_num_1 < fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;
}

const Fixed&	Fixed::min(const Fixed& fixed_num_1, const Fixed& fixed_num_2){
	if (fixed_num_1 < fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;	
}

Fixed&	Fixed::max(Fixed& fixed_num_1, Fixed& fixed_num_2){
	if (fixed_num_1 > fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;
}

const Fixed&	Fixed::max(const Fixed& fixed_num_1, const Fixed& fixed_num_2){
	if (fixed_num_1 > fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;	
}

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
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed(int const num)
{
	// std::cout << "Int constructor called" << std::endl;
	double scale = std::pow(2, this->_fractional_bits);
	this->_value = static_cast<int>(num * scale);
}

Fixed::Fixed(const float num) : _value (roundf(num * (1 << _fractional_bits))){
}


Fixed& Fixed::operator= (const Fixed &origin)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &origin )
        this->_value = origin.getRawBits();
    return *this;
}

Fixed::Fixed(Fixed const & original)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = original.getRawBits();
}

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;

	this->_value = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}