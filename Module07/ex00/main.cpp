/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/22 15:53:54 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template< typename T >
T	max(T const & x, T const & y) {
	return (x >= y ? x : y);
}

template< typename T >
T	min(T const & x, T const & y) {
	return (x <= y ? x : y);
}

template< typename T >
void	swap(T & x, T & y) {
	T tmp = x;

	x = y;
	y = tmp;
	return ;
}

int	main()
{
	int	e = -7;
	int	f = 42;

	char	g = 'g';
	char	h = 'h';
	std::cout << "===========" << std::endl;
	std::cout << " max(e, f) = " << max(e, f) << "." << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " min(e, f) = " << min(e, f) << "." << std::endl;
	std::cout << "-----" << std::endl;
	
	std::cout << " max(g, h) = " << max(g, h) << "." << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " min(g, h) = " << min(g, h) << "." << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "Swap e, f." << std::endl;
	swap(e, f);
	std::cout << "-----" << std::endl;
	std::cout << " max(e, f) = " << max(e, f) << "." << std::endl;
	std::cout << "---" << std::endl;
	std::cout << " min(e, f) = " << min(e, f) << "." << std::endl;
	std::cout << "===========" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "===========" << std::endl;
	return (0);	
}