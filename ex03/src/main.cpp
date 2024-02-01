/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:47 by jschott           #+#    #+#             */
/*   Updated: 2024/01/30 13:57:32 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include <cstdlib>
#include <ctime>

int	main( void ) {
	
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	Point 		a (static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f,\
					static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f);
	Point 		b (static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f, \
					static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f);
	Point 		c (static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f, \
					static_cast<float>((rand() - rand()) % 100000000) / 1000000.0f);
	Point 		x (static_cast<float>((rand() - rand()) % 100000) / 1000000.0f, \
					static_cast<float>((rand() - rand()) % 100000) / 1000000.0f);
	
	std::cout << "Point X (" << x.getX() << ", " << x.getY() << ")" << std:: endl << "is ";
	if (!bsp(x, a, b, c))
		std::cout << "not ";
	std::cout << "located inside the triangle" << std::endl << "with vertices ";
	std::cout << "(" << a.getX() << ", " << a.getY() << "), ";
	std::cout << "(" << b.getX() << ", " << b.getY() << ") & ";
	std::cout << "(" << c.getX() << ", " << c.getY() << ")." << std::endl;

	return 0;
}
