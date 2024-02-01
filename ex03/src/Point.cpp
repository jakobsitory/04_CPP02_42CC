/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:23:49 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:30:51 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed Point::getX (void) const{
	return this->_x;
}
Fixed Point::getY (void) const{
	return this->_y;
}

Point::Point(void) : _x(0), _y (0){
}

Point::Point(const int x, const int y) : _x (Fixed(x)), _y (Fixed(y)){
}

Point::Point(const float x, const float y) : _x (Fixed(x)), _y (Fixed(y)){
}

Point:: Point(const Point &new_point) : _x (new_point.getX()), _y (new_point.getY()) {
}

Point& Point::operator= (Point &origin) {
	return origin;
}

Point::~Point(){
}