/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:23:49 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:31:49 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

/**
 * @brief Retrieves the X coordinate of the Point. * 
 * @return Fixed - The X coordinate of the Point.
 */
Fixed Point::getX (void) const{
	return this->_x;
}

/**
 * @brief Retrieves the Y coordinate of the Point. * 
 * @return Fixed - The Y coordinate of the Point.
 */
Fixed Point::getY (void) const{
	return this->_y;
}

/**
 * @brief Default constructor for the Point class.
 */
Point::Point(void) : _x(0), _y (0){
}

/**
 * @brief Integer constructor for the Point class.
 * 
 * @param x const int - The integer value for the X coordinate.
 * @param y const int - The integer value for the Y coordinate.
 */
Point::Point(const int x, const int y) : _x (Fixed(x)), _y (Fixed(y)){
}

/**
 * @brief Floating-point constructor for the Point class.
 * 
 * @param x const float - The floating-point value for the X coordinate.
 * @param y const float - The floating-point value for the Y coordinate.
 */
Point::Point(const float x, const float y) : _x (Fixed(x)), _y (Fixed(y)){
}

/**
 * @brief Copy constructor for the Point class.
 * 
 * @param new_point const Point& - The Point object to copy.
 */
Point:: Point(const Point &new_point) : _x (new_point.getX()), _y (new_point.getY()) {
}

/**
 * @brief Copy assignment operator for the Point class.
 * 
 * @param origin Point& - The Point object to assign from.
 * @return Point& - A reference to the assigned Point object.
 */
Point& Point::operator= (Point &origin) {
	return origin;
}

/**
 * @brief Destructor for the Point class.
 */
Point::~Point(){
}