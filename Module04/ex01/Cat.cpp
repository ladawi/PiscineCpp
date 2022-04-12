/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:23:06 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:03:06 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat Default constuctor called" << std::endl;
	_B = new Brain();
	return ;
}

Cat::~Cat(void) {
	std::cout << "Cat Default destuctor called" << std::endl;
	delete _B;
	return ;
}

Cat::Cat(Cat const & tmp) {
	std::cout << "Cat Copy constuctor called" << std::endl;
	this->_B = NULL;
	*this = tmp;
	return ;
}

Cat &		Cat::operator=(Cat const & rhs) {
	std::cout << "Cat Copy assignement constuctor called" << std::endl;
	this->_B = rhs.getIdeas();
	return (*this);
}

void		Cat::makeSound(void) const {
	std::cout << "Miaou Uwu" << std::endl;
	return ;
}

Brain*		Cat::getIdeas(void) const {
	return (this->_B);
}
