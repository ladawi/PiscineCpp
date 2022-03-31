/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:22:23 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/31 14:53:51 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	this->funcptr[0] = &Harl::_debug;
	this->funcptr[1] = &Harl::_info;
	this->funcptr[2] = &Harl::_warning;
	this->funcptr[3] = &Harl::_error;
	this->Tab[0] = "DEBUG";
	this->Tab[1] = "INFO";
	this->Tab[2] = "WARNING";
	this->Tab[3] = "ERROR";
	return ;
}

Harl::~Harl(void) {
	return ;
}

void	Harl::_debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	this->_info();
	return ;
}

void	Harl::_info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	this->_warning();
	return ;
}

void	Harl::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	this->_error();
	return ;
}

void	Harl::_error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level){
	int	i = 0;

	while (this->Tab[i] != level && i < 4)
		i++;
	if (i < 4)
		(this->*funcptr[i])();
	return ;
}