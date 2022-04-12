/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:22:05 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:11:52 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain Default constuctor called" << std::endl;
	return ;
}

Brain::~Brain(void) {
	std::cout << "Brain Default destructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & tmp) {
	std::cout << "Brain Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

Brain &		Brain::operator=(Brain const & rhs) {
	std::cout << "Brain Copy assignement constuctor called" << std::endl;
	return (*this);
}
