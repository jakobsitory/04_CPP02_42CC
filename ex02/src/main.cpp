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

int	main( void ) {

	Fixed	a = Fixed( 1234.4321f );
	Fixed	b = Fixed( 5678.8765f );

	std::cout << "COMPARISON OPERATORS TESTS" << std::endl << std::endl;
	std::cout << std::boolalpha;
	std::cout << a << " > " << b << " is:\t" << (a > b) << std::endl;
	std::cout << b << " > " << a << " is:\t" << (b > a) << std::endl;
	std::cout << a << " > " << a << " is:\t" << (a > a) << std::endl << std::endl;
 
 	std::cout << a << " < " << b << " is:\t" << (a < b) << std::endl;
	std::cout << b << " < " << a << " is:\t" << (b < a) << std::endl;
	std::cout << a << " < " << a << " is:\t" << (a < a) << std::endl << std::endl;
	 
 	std::cout << a << " >= " << b << " is:\t" << (a >= b) << std::endl;
	std::cout << b << " >= " << a << " is:\t" << (b >= a) << std::endl;
	std::cout << a << " >= " << a << " is:\t" << (a >= a) << std::endl << std::endl;
 
 	std::cout << a << " <= " << b << " is:\t" << (a <= b) << std::endl;
	std::cout << b << " <= " << a << " is:\t" << (b <= a) << std::endl;
	std::cout << a << " <= " << a << " is:\t" << (a <= a) << std::endl << std::endl;
 
 	std::cout << a << " == " << b << " is:\t" << (a == b) << std::endl;
	std::cout << b << " == " << a << " is:\t" << (b == a) << std::endl;
	std::cout << a << " == " << a << " is:\t" << (a == a) << std::endl << std::endl;
	 
 	std::cout << a << " != " << b << " is:\t" << (a != b) << std::endl;
	std::cout << b << " != " << a << " is:\t" << (b != a) << std::endl;
	std::cout << a << " != " << a << " is:\t" << (a != a) << std::endl << std::endl;
	
	std::cout << "press enter to continue" << std::endl;
	std::string input;
	std::getline(std::cin, input);

	std::cout << std::endl << "ARITHMETIC OPERATORS TESTS" << std::endl << std::endl;
	std::cout << a << " + " << b << " is:\t" << (a + b) << std::endl;
	std::cout << a << " - " << b << " is:\t" << (a - b) << std::endl;
	std::cout << a << " * " << b << " is:\t" << (a * b) << std::endl;
	std::cout << a << " / " << b << " is:\t" << (a / b) << std::endl;
	std::cout << b << " / " << a << " is:\t" << (b / a) << std::endl;

	std::cout << "press enter to continue" << std::endl;
	std::getline(std::cin, input);

	std::cout << std::endl << "IN- & DECREMENT OPERATORS TESTS" << std::endl << std::endl;
	Fixed x;
	std::cout << "testval:\t\t" << x << std::endl;
	std::cout <<"++" << x << " is:\t\t\t" << ++x << std::endl;
	std::cout << "testval:\t\t" << x << std::endl;
	std::cout << x << "++ is:\t" << x++ << std::endl;
	std::cout << "testval:\t\t" << x << std::endl << std::endl;
	Fixed z;
	std::cout << "testval:\t\t" << z << std::endl;
	std::cout <<"--" << z << " is:\t\t\t" << --z << std::endl;
	std::cout << "testval:\t\t" << z << std::endl;
	std::cout << z << "-- is:\t" << z-- << std::endl;
	std::cout << "testval:\t\t" << z << std::endl;

	std::cout << "press enter to continue" << std::endl;
	std::getline(std::cin, input);

	std::cout << std::endl << "MIN & MAX FUNCTION TESTS" << std::endl << std::endl;
	std::cout <<"min of " << a << " & " << b << " is:\t" << Fixed::min(a, b) << std::endl;
	std::cout <<"max of " << a << " & " << b << " is:\t" << Fixed::max(a, b) << std::endl;
	std::cout <<"min of " << a << " & " << a << " is:\t" << Fixed::min(a, a) << std::endl;
	
	std::cout << "press enter to continue" << std::endl;
	std::getline(std::cin, input);
	
	std::cout << std::endl << "SUBJECT TESTS" << std::endl << std::endl;
	Fixed		c;

	Fixed const	d( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "calculating: " << Fixed(5.05f) << " * " << Fixed (2) << " = " << d << std::endl;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max( c, d ) << std::endl;
	
	return 0;

}
