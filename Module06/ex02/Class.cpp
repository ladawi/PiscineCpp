/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:14:08 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 18:16:06 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base::~Base(void) {
	std::cout << "Base Default destructor called" << std::endl;
	return ;
}

A::A(void) {
	std::cout << "A Default constructor called" << std::endl;
}

A::~A(void) {
	std::cout << "A Default destructor called" << std::endl;
}

B::B(void) {
	std::cout << "B Default constructor called" << std::endl;
}
B::~B(void) {
	std::cout << "B Default destructor called" << std::endl;
}

C::C(void) {
	std::cout << "C Default constructor called" << std::endl;
}
C::~C(void) {
	std::cout << "C Default destructor called" << std::endl;
}