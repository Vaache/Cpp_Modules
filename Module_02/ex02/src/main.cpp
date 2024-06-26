/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhovhann <vhovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:08:08 by vhovhann          #+#    #+#             */
/*   Updated: 2024/04/08 13:42:26 by vhovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed c(15);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "C : " << c << std::endl;
	std::cout << "C : " << ++c << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

/*
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
*/