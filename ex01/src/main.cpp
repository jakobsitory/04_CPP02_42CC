/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:47 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:22:43 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/**
 * @file main.cpp
 * @brief Demonstrates the use of the Fixed class for fixed-point number manipulation.
 *
 * This program creates instances of the Fixed class and demonstrates basic operations such as instantiation,
 * copy construction, and assignment. It showcases how to output fixed-point numbers using the overloaded
 * insertion operator and how to convert fixed-point numbers to integer representations using the toInt method.
 * The output of the program includes the fixed-point and integer representations of several Fixed objects,
 * illustrating the use of constructors, assignment, and conversion methods in the Fixed class.
 */
int	main( void ) {

	Fixed	a;
	Fixed	const b( 10 );
	Fixed	const c( 42.42f );
	Fixed	const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;

}
