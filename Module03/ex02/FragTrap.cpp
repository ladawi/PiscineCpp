/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:29 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 20:48:33 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default constuctor called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Default destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap Init constructor called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setStamina(100);
	this->setAtkdmg(30);
	return ;
}

FragTrap::FragTrap(FragTrap const & tmp) {
	std::cout << "FragTrap Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	
	this->setName(rhs.getName());
	this->setHp(rhs.getHp());
	this->setStamina(rhs.getStamina());
	this->setAtkdmg(rhs.getAtkdmg());
	return (*this);
}


void			FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " ask for highFives!" << std::endl;
	return ;
}