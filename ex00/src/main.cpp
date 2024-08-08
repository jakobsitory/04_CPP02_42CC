/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:47 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:19:10 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/**
 * @brief The main entry point of the program.
 * 
 * Initializes three Fixed objects: 'a' with the default constructor, 'b' with the copy constructor using 'a',
 * and 'c' through assignment from 'b'. It then prints the raw bits of each object to standard output, demonstrating
 * that 'b' and 'c' have been successfully copied from 'a'. The program returns 0 to indicate successful execution.
 */
int	main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
