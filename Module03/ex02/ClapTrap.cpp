/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:59:11 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/07 18:08:22 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Unknown"), _Hp(10), _Stamina(10), _Atkdmg(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Default destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hp(10), _Stamina(10), _Atkdmg(0) {
	std::cout << "ClapTrap Init constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	
	this->_Name = rhs.getName();
	this->_Hp = rhs.getHp();
	this->_Stamina = rhs.getStamina();
	this->_Atkdmg = rhs.getAtkdmg();
	return (*this);
}

void			ClapTrap::setName(std::string name) {
	this->_Name = name;
	return ;
}

void			ClapTrap::setAtkdmg(unsigned int nb) {
	this->_Atkdmg = nb;
	return ;
}

void			ClapTrap::setHp(unsigned int nb) {
	this->_Hp = nb;
	return ;
}

void			ClapTrap::setStamina(unsigned int nb) {
	this->_Stamina = nb;
	return ;
}

std::string		ClapTrap::getName(void) const {
	return (this->_Name);
}

unsigned int	ClapTrap::getHp(void) const {
	return (this->_Hp);
}

unsigned int	ClapTrap::getStamina(void) const {
	return (this->_Stamina);
}

unsigned int	ClapTrap::getAtkdmg(void) const {
	return (this->_Atkdmg);
}

void			ClapTrap::attack(const std::string & target) {
	if (_Hp > 0 && _Stamina > 0)
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _Atkdmg << " points of damage!" << std::endl;
		this->setStamina(_Stamina - 1);
	}
	return ;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	if (_Hp > 0 && _Stamina > 0)
	{
		this->setHp(_Hp + amount);
		std::cout << _Name << " repair himslef for " << amount << " Hp." << std::endl;
		this->setStamina(_Stamina - 1);
	}
	return ;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	if (_Hp > 0 && _Stamina > 0)
	{
		amount = (amount > _Hp ? _Hp : amount);
		this->setHp(_Hp - amount);
		std::cout << _Name << " took " << amount << " damage." << std::endl;
		this->setStamina(_Stamina - 1);
	}
	return ;
}