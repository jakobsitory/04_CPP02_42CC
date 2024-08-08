/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:25:07 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:32:36 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"

/**
 * @brief Calculates the absolute value of a Fixed object.
 * 
 * @param val Fixed - The Fixed object whose absolute value is to be calculated.
 * @return Fixed - The absolute value of the input Fixed object.
 */
Fixed	abs_fix(Fixed val){
	if (val.getRawBits() < 0)
		return Fixed (-1) * val;
	return val;
}

/**
 * @brief Calculates the area of a triangle given its vertices.
 * 
 * @param a Point - The first vertex of the triangle.
 * @param b Point - The second vertex of the triangle.
 * @param c Point - The third vertex of the triangle.
 * @return Fixed - The area of the triangle as a Fixed object.
 */
Fixed	area_triangle(Point a, Point b, Point c){
	// std::cout << "Area calculated from:" << std::endl;
	// std::cout << a.getX() << "\t" << a.getY() << std::endl;
	// std::cout << b.getX() << "\t" << b.getY() << std::endl;
	// std::cout << c.getX() << "\t" << c.getY() << std::endl;
	// std::cout << Fixed (0.5f) * (abs_fix (a.getX() * (b.getY() - c.getY()) \
	// 			+ b.getX() * (c.getY() - a.getY()) + \
	// 			c.getX() * (a.getY() - b.getY()))) << std::endl << std::endl;
	
	return Fixed (0.5f) * (abs_fix (a.getX() * (b.getY() - c.getY()) \
				+ b.getX() * (c.getY() - a.getY()) + \
				c.getX() * (a.getY() - b.getY())));
}

/**
 * @brief Determines if a point is inside a triangle.
 * 
 * @param x Point - The point to check.
 * @param a Point - The first vertex of the triangle.
 * @param b Point - The second vertex of the triangle.
 * @param c Point - The third vertex of the triangle.
 * @return bool - True if point X is inside the triangle, false otherwise.
 */
bool	bsp(Point x, Point a, Point b, Point c){

	if (area_triangle(a, b, c) == \
				area_triangle(a, b, x) + \
				area_triangle(a, x, c) + \
				area_triangle(x, b, c))
		return true;
	return false;
}