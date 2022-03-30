/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:43 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:23:46 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(void) {
	return ;
}

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

const std::string& Weapon::gettype(void) const {
	const std::string& typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string newtype) {
	this->_type = newtype;
	return ;
}