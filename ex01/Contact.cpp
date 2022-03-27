/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:33:08 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/27 21:44:29 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string n1, std::string n2, std::string nm, std::string phone, std::string secret) :
_firstname(n1), _lastname(n2), _nickname(nm), _phone(phone), _secret(secret) {
	// std::cout << "Constructor Contact called" << std::endl;
	return ;
}

Contact::~Contact(void) {
	// std::cout << "Destructor Contact called" << std::endl;
	return ;
}

std::string	Contact::getfirstname(void) const {
	return (this->_firstname);
}

void	Contact::setfirstname(std::string name) {
	this->_firstname = name;
	return ;
}

std::string	Contact::getlastname(void) const {
	return (this->_lastname);
}

void	Contact::setlastname(std::string name) {
	this->_lastname = name;
	return ;
}

std::string	Contact::getnickname(void) const {
	return (this->_nickname);
}

void	Contact::setnickname(std::string nickname) {
	this->_nickname = nickname;
	return ;
}

std::string	Contact::getphone(void) const {
	return (this->_phone);
}

void	Contact::setphone(std::string phone) {
	this->_phone = phone;
	return ;
}

std::string	Contact::getsecret(void) const {
	return (this->_secret);
}

void	Contact::setsecret(std::string secret) {
	this->_secret = secret;
	return ;
}

void	Contact::printcontact(void) const {
	std::cout << "First name : " << this->getfirstname() << std::endl;
	std::cout << "Last name : " <<this->getlastname() << std::endl;
	std::cout << "Nickname : " << this->getnickname() << std::endl;
	std::cout << "Phone number : " << this->getphone() << std::endl;
	std::cout << "Darkest secret : " << this->getsecret() << std::endl;
	return ;
}