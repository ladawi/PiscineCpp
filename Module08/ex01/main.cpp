/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:24:47 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 04:18:47 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Span.hpp"

int	main() {

	Span one(10010);

	std::cout << "======================" << std::endl;
	std::cout << std::endl;
	try {
			one.addRange(0, 10);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Actual size of one : " << one.getcontent().size() << ". | Max size : " << one.getmaxsize() << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;
	try {
		for (int i = 0 ; i < 10000; i++) {
			one.addNumber(i + 2*i);
			std::cout << "added " << i + 2*i << " to one." << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Actual size of one : " << one.getcontent().size() << ". | Max size : " << one.getmaxsize() << std::endl;
	std::cout << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "one.longestSpan() : " << one.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--------" << std::endl;
	std::cout << std::endl;
	try {
		std::cout << "one.shortestSpan() : " << one.shortestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "======================" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
	
	return (0);
}