/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:29 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/07 18:22:01 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Unknown_clap_name"), ScavTrap("Unknown"), FragTrap("Unknown"), _Name("Unknown") {
	std::cout << "DiamondTrap Default constuctor called" << std::endl;
	this->FragTrap::setHp(100);
	this->ScavTrap::setStamina(50);
	this->FragTrap::setAtkdmg(30);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Default destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _Name(name) {
	std::cout << "DiamondTrap Init constructor called" << std::endl;
	this->FragTrap::setHp(100);
	this->ScavTrap::setStamina(50);
	this->FragTrap::setAtkdmg(30);
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & tmp) {
	std::cout << "DiamondTrap Copy constuctor called" << std::endl;
	*this = tmp;
	return ;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_Name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My Diamond class name is " << getName() << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap &		DiamondTrap::operator=(DiamondTrap const & rhs) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	
	this->_Name = rhs.getName();
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->setHp(rhs.getHp());
	this->setStamina(rhs.getStamina());
	this->setAtkdmg(rhs.getAtkdmg());
	return (*this);
}