/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:25:07 by jschott           #+#    #+#             */
/*   Updated: 2024/01/30 13:57:32 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"

Fixed	abs_fix(Fixed val){
	if (val.getRawBits() < 0)
		return Fixed (-1) * val;
	return val;
}


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

bool	bsp(Point x, Point a, Point b, Point c){

	if (area_triangle(a, b, c) == \
				area_triangle(a, b, x) + \
				area_triangle(a, x, c) + \
				area_triangle(x, b, c))
		return true;
	return false;
}