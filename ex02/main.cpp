/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:47 by jschott           #+#    #+#             */
/*   Updated: 2023/12/22 16:39:48 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed	a = Fixed( 1234.4321f );
	Fixed	b = Fixed( 5678.8765f );

	std::cout << "COMPARISON OPERATORS TESTSS" << std::endl << std::endl;
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

	return 0;

}
