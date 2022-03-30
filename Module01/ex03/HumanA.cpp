/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:38 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:55:05 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string n, Weapon &Weap) : _name(n), _arme(Weap){
	return ;
}

HumanA::~HumanA(void){
	return ;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_arme.gettype() << std::endl;;
	return ;
}