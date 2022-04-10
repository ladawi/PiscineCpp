/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:05:28 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 16:40:28 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10.5f );
	Fixed const c( 1.5f );
	Fixed const d( b );
	a = Fixed( 1234.1234f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "-----------------------------" << std::endl;

	std::cout << a << " | " << b << " | " << c << std::endl;
	a = b + c;
	std::cout << a << std::endl;

	std::cout << "-----------------------------" << std::endl;

	std::cout << a << std::endl;
	--a;
	std::cout << a << std::endl;

	std::cout << "-----------------------------" << std::endl;
	Fixed u;
	Fixed const j( Fixed( 5.05f ) * Fixed( 2.0f ) );
	Fixed const x( Fixed( 5.05f ) / Fixed( 2.0f ) );


	std::cout << u << std::endl;
	std::cout << ++u << std::endl;
	std::cout << u << std::endl;
	std::cout << u++ << std::endl;
	std::cout << u << std::endl;
	std::cout << "---|---|---" << std::endl;
	std::cout << u << std::endl;
	std::cout << --u << std::endl;
	std::cout << u << std::endl;
	std::cout << u-- << std::endl;
	std::cout << u << std::endl;

	std::cout << "---" << std::endl;
	std::cout << j << std::endl;
	std::cout << "---" << std::endl;

	std::cout << "[" << (j == u) << "]" << std::endl;

	std::cout << "-----------------------------" << std::endl;
	std::cout << Fixed::max( j, u ) << std::endl;
	std::cout << Fixed::max( u, x) << std::endl;
	std::cout << "-------" << std::endl;
	std::cout << Fixed::min( u, j ) << std::endl;
	std::cout << Fixed::min( j, x ) << std::endl;

	
	return 0;
}