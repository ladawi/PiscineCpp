/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:11:57 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 18:57:54 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <exception>
#include <experimental/random>

#include "Class.hpp"

Base *	CreateA(void) {
	A *ptr = new A;
	return (ptr);
}

Base *	CreateB(void) {
	B *ptr = new B;
	return (ptr);
}

Base *	CreateC(void) {
	C *ptr = new C;
	return (ptr);
}
Base *	generate(void) {
	int	nb = 0;

	nb = std::experimental::randint(0, 2);
	std::cout << nb << std::endl;
	if (nb == 0) {
		return (CreateA());
	}
	else if (nb == 1) {
		return (CreateB());
	}
	else if (nb == 2) {
		return (CreateC());
	}
	return (0);
}

void	identify(Base* p) {
	A* testA = dynamic_cast<A *>(p);
	B* testB = dynamic_cast<B *>(p);
	C* testC = dynamic_cast<C *>(p);

	if (testA != NULL)
		std::cout << "P is a class A\n";
	else if (testB != NULL)
		std::cout << "P is a class B\n";
	else if (testC != NULL)
		std::cout << "P is a class C\n";
	else
		std::cout << "P is not A, B or C\n";
}

void	identify(Base& p) {
	try {
		A &	Test = dynamic_cast<A &>(p);
		std::cout << "P is a class A\n";
	}
	catch (std::bad_cast &bc) {}
	try {
		B &	Test = dynamic_cast<B &>(p);
		std::cout << "P is a class B\n";
	}
	catch (std::bad_cast &bc) {}
	try {
		C &	Test = dynamic_cast<C &>(p);
		std::cout << "P is a class C\n";
	}
	catch (std::bad_cast &bc) {}
}

int		main()
{
	std::cout << "------------" << std::endl;
	identify(generate());
	std::cout << "--" << std::endl;
	identify(*generate());
	std::cout << "------------" << std::endl;
	return (0);
}