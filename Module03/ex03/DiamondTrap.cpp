/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:18:29 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 20:37:39 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap Default constuctor called" << std::endl;
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

std::string	DiamondTrap::getName(void)
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
	
	// this->setName(rhs.getName());
	// this->setHp(rhs.getHp());
	// this->setStamina(rhs.getStamina());
	// this->setAtkdmg(rhs.getAtkdmg());
	return (*this);
}

// void			DiamondTrap::attack(const std::string & target) {
// 	if (this->getHp() > 0 && this->getStamina() > 0)
// 	{
// 		std::cout << "DiamondTrap " << this->getName() << " attacks " << target << ", causing " << this->getAtkdmg() << " points of damage!" << std::endl;
// 		this->setStamina(this->getStamina() - 1);
// 	}
// 	return ;
// }

// void			DiamondTrap::highFivesGuys(void) {
// 	std::cout << "DiamondTrap " << this->getName() << " ask for highFives!" << std::endl;
// 	return ;
// }