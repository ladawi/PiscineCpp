/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:54:44 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/27 21:58:48 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nbaddedcontact(0) {
	this->tab[0] = &_gen0;
	this->tab[1] = &_gen1;
	this->tab[2] = &_gen2;
	this->tab[3] = &_gen3;
	this->tab[4] = &_gen4;
	this->tab[5] = &_gen5;
	this->tab[6] = &_gen6;
	this->tab[7] = &_gen7;
	// std::cout << "Constructor PhoneBook called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

void	PhoneBook::addcontact(int id, std::string tab[5]) {
	this->tab[id]->setfirstname(tab[0]);
	this->tab[id]->setlastname(tab[1]);
	this->tab[id]->setnickname(tab[2]);
	this->tab[id]->setphone(tab[3]);
	this->tab[id]->setsecret(tab[4]);
	this->nbaddedcontact++;
	return ;
}

void	printsearch(std::string str)
{
	int	len = 0;
	len = 10 - str.size();
	if (len > 0)
	{
		std::string buff2(len, ' ');
		buff2.append(str);
		std::cout << "|" << buff2;
	}
	else if (len < 0)
	{
		std::string buff2(str);
		buff2.resize(9);
		buff2.append(1, '.');
		std::cout << "|" << buff2;
	}
	else
	{
		std::string buff2(str);
		std::cout << "|" << buff2;
	}
}

void	PhoneBook::print(void) {
	int	i = 0;


	while (i < 8)
	{
		std::string buff(9, ' ');
		buff.append(1 ,i + 48);
		std::cout << "|" << buff;
		printsearch(this->tab[i]->getfirstname());
		printsearch(this->tab[i]->getlastname());
		printsearch(this->tab[i]->getnickname());
		std::cout << "|" << std::endl;
		i++;
	}
	return ;
}