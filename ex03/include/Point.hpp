/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:24:11 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 11:55:55 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "../include/Fixed.hpp"

class Point
{
private:
	const	Fixed _x;
	const	Fixed _y;

public:
	Point();
	Point(const Point &new_point);
	~Point();
	Point& operator= (Point &origin);

	Point(const int x, const int y);
	Point(const float x, const float y);

	Fixed getX (void) const;
	Fixed getY (void) const;
	Fixed setX (const Fixed x) const;
	Fixed setY (const Fixed x) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
