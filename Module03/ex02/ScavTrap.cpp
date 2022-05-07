/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:29 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/07 18:08:38 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default constuctor called" << std::endl;
	this->setName("Unknown");
	this->setHp(100);
	this->setStamina(50);
	this->setAtkdmg(20);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Default destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Init constructor called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setStamina(50);
	this->setAtkdmg(20);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & tmp) {
	std::cout << "ScavTrap Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	
	this->setName(rhs.getName());
	this->setHp(rhs.getHp());
	this->setStamina(rhs.getStamina());
	this->setAtkdmg(rhs.getAtkdmg());
	return (*this);
}

void			ScavTrap::attack(const std::string & target) {
	if (this->getHp() > 0 && this->getStamina() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAtkdmg() << " points of damage!" << std::endl;
		this->setStamina(this->getStamina() - 1);
	}
	return ;
}

void			ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " enter Gate keeper mode." << std::endl;
	return ;
}