/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:23:06 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 19:55:47 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Default constuctor called" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Default destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & tmp) {
	std::cout << "WrongCat Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

WrongCat &		WrongCat::operator=(WrongCat const & rhs) {
	std::cout << "WrongCat Copy assignement constuctor called" << std::endl;
	return (*this);
}

void		WrongCat::makeSound(void) const {
	std::cout << "Miaou Uwu" << std::endl;
	return ;
}