/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:49:18 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(void){
	return ;
}

HumanB::HumanB(std::string n) : _name(n){
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_arme->gettype() << std::endl;;
	return ;
}

void	HumanB::setWeapon(Weapon &Weap) {
	this->_arme = &Weap;
	return ;
}