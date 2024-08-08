/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:30 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:30:02 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/* COMPARISON OPERATOR OVERLOADS */

/**
 * @brief Checks if the current Fixed object is less than the given Fixed object.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare against.
 * @return bool - True if the current object is less than the given object, false otherwise.
 */
bool	Fixed::operator<(const Fixed& fixed_num) const {
	return this->getRawBits() < fixed_num.getRawBits();
}

/**
 * @brief Checks if the current Fixed object is greater than the given Fixed object.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare against.
 * @return bool - True if the current object is greater than the given object, false otherwise.
 */
bool	Fixed::operator>(const Fixed& fixed_num) const {
	return this->getRawBits() > fixed_num.getRawBits();
}

/**
 * @brief Checks if the current Fixed object is greater than or equal to the given Fixed object.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare against.
 * @return bool - True if the current object is greater than or equal to the given object, false otherwise.
 */
bool	Fixed::operator>=(const Fixed& fixed_num) const {
	return this->getRawBits() >= fixed_num.getRawBits();
}

/**
 * @brief Checks if the current Fixed object is less than or equal to the given Fixed object.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare against.
 * @return bool - True if the current object is less than or equal to the given object, false otherwise.
 */
bool	Fixed::operator<=(const Fixed& fixed_num) const {
	return this->getRawBits() <= fixed_num.getRawBits();
}

/**
 * @brief Overloads the equality comparison operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare with.
 * @return bool - True if the objects are equal, false otherwise.
 */
bool	Fixed::operator==(const Fixed& fixed_num) const {
	return this->getRawBits() == fixed_num.getRawBits();
}

/**
 * @brief Overloads the inequality comparison operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to compare with.
 * @return bool - True if the objects are not equal, false otherwise.
 */
bool	Fixed::operator!=(const Fixed& fixed_num) const {
	return this->getRawBits() != fixed_num.getRawBits();
}

/* ARITHMETIC OPERATOR OVERLOADS */

/**
 * @brief Overloads the addition operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to add.
 * @return Fixed& - A reference to a new Fixed object with the result.
 */
Fixed&	Fixed::operator+(const Fixed& fixed_num) const {

	int result_raw = this->getRawBits() + fixed_num.getRawBits();

	Fixed *result = new Fixed;
	result->setRawBits(result_raw);
	return (*result);
}

/**
 * @brief Overloads the subtraction operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to subtract.
 * @return Fixed& - A reference to a new Fixed object with the result.
 */
Fixed&	Fixed::operator-(const Fixed& fixed_num) const {

	int result_raw = this->getRawBits() - fixed_num.getRawBits();

	Fixed *result = new Fixed;
	result->setRawBits(result_raw);
	return (*result);
}

/**
 * @brief Overloads the multiplication operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to multiply.
 * @return Fixed& - A reference to a new Fixed object with the result.
 */
Fixed&	Fixed::operator*(const Fixed& fixed_num) const {

	float result_float = this->toFloat() * fixed_num.toFloat();

	Fixed *result = new Fixed (result_float);
	return (*result);
}

/**
 * @brief Overloads the division operator.
 * 
 * @param fixed_num const Fixed& - The Fixed object to divide by.
 * @return Fixed& - A reference to a new Fixed object with the result.
 */
Fixed&	Fixed::operator/(const Fixed& fixed_num) const {

	float result_float = this->toFloat() / fixed_num.toFloat();

	Fixed *result = new Fixed (result_float);
	return (*result);
}

/* INCREMENT OPERATOR OVERLOADS */

/**
 * @brief Overloads the postfix increment operator.
 * 
 * @return Fixed - A copy of the Fixed object before the increment.
 */
Fixed Fixed::operator++(int) {

	Fixed temp(*this);
	temp._value = this->_value++;
	return temp;
}

/**
 * @brief Overloads the prefix increment operator.
 * 
 * @return Fixed& - A reference to the Fixed object.
 */
Fixed&	Fixed::operator++(void) {

	++this->_value;
	return *this;
}

/**
 * @brief Overloads the postfix decrement operator.
 * 
 * @return Fixed - A copy of the Fixed object before the decrement.
 */
Fixed Fixed::operator--(int) {

	Fixed temp(*this);
	temp._value = this->_value--;
	return temp;
}

/**
 * @brief Overloads the prefix decrement operator.
 * 
 * @return Fixed& - A reference to the Fixed object.
 */
Fixed&	Fixed::operator--(void) {

	--this->_value;
	return *this;
}

/**
 * @brief Determines the minimum of two Fixed objects (non-const version).
 * 
 * @param fixed_num_1 Fixed& - The first Fixed object to compare.
 * @param fixed_num_2 Fixed& - The second Fixed object to compare.
 * @return Fixed& - A reference to the Fixed object with the lesser value.
 */
Fixed&	Fixed::min(Fixed& fixed_num_1, Fixed& fixed_num_2){
	if (fixed_num_1 < fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;
}

/**
 * @brief Determines the minimum of two Fixed objects (const version).
 * 
 * @param fixed_num_1 const Fixed& - The first Fixed object to compare.
 * @param fixed_num_2 const Fixed& - The second Fixed object to compare.
 * @return const Fixed& - A const reference to the Fixed object with the lesser value.
 */
const Fixed&	Fixed::min(const Fixed& fixed_num_1, const Fixed& fixed_num_2){
	if (fixed_num_1 < fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;	
}

/**
 * @brief Determines the maximum of two Fixed objects (non-const version).
 * 
 * @param fixed_num_1 Fixed& - The first Fixed object to compare.
 * @param fixed_num_2 Fixed& - The second Fixed object to compare.
 * @return Fixed& - A reference to the Fixed object with the greater value.
 */
Fixed&	Fixed::max(Fixed& fixed_num_1, Fixed& fixed_num_2){
	if (fixed_num_1 > fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;
}

/**
 * @brief Determines the maximum of two Fixed objects (const version).
 * 
 * @param fixed_num_1 const Fixed& - The first Fixed object to compare.
 * @param fixed_num_2 const Fixed& - The second Fixed object to compare.
 * @return const Fixed& - A const reference to the Fixed object with the greater value.
 */
const Fixed&	Fixed::max(const Fixed& fixed_num_1, const Fixed& fixed_num_2){
	if (fixed_num_1 > fixed_num_2)
		return fixed_num_1;
	return fixed_num_2;	
}

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