/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:05:43 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/19 17:19:47 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void) {
	// std::cout << "Convert Default constructor called" << std::endl;
	return ;
}

Convert::Convert(std::string tmp) : _str(tmp) {
	// std::cout << "Convert Init constructor called" << std::endl;
	return ;
}

Convert::~Convert(void) {
	// std::cout << "Convert Default destructor called" << std::endl;
	return ;
}

Convert::Convert(Convert const & tmp) {
	// std::cout << "Convert Copy constructor called" << std::endl;
	_str = tmp.getStr();
	*this = tmp;
	return ;
}

Convert &	Convert::operator=(Convert const & rhs) {
	this->_str = rhs.getStr();
	return (*this);
}

void		Convert::setStr(std::string str) {
	this->_str = str;
	return ;
}

std::string Convert::getStr(void) const {
	return (this->_str);
}


bool		Convert::isdigit() {
	int i = 0;

	while (_str[i])
	{
		if (std::isdigit(_str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

bool		Convert::isFloat() {
	char	*ptr;
	
	if (_str.empty())
        return false;
	std::strtod(_str.c_str(), &ptr);
	if (_str.back() == 'f')
		ptr++;
	return (*ptr) == '\0';
}

int			Convert::converttoint(void) {
	double nb;

	try {
		nb = static_cast<double>(std::strtod(this->_str.c_str(), NULL));
		if (!(isFloat())) {
			throw Convert::ImpossibleExcept();
			return (0);
		}
		if (nb > 2147483647 || nb < -2147483648 || this->_str == "nan" || this->_str == "nanf")
		{
			throw Convert::ImpossibleExcept();
			return (0);
		}
	}
	catch (std::invalid_argument &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	this->_int = static_cast<int>(nb);
	return (this->_int);
}

char		Convert::converttochar(void) {
	char c;
	
	if (isdigit() || isFloat())
	{
		try {
			try {
				converttoint();
			}
			catch (std::exception &e) {
				throw Convert::ImpossibleExcept();
			}
			if (_int < 0 || _int > 256) {
				throw Convert::ImpossibleExcept();
			}
			if (_int < 32 || _int > 127) {
				throw Convert::Undisplayable();
			}
			c = static_cast<char>(_int);
		}
		catch (std::exception &e) {
			std::cout << e.what();
		}
		this->_char = c;
	}
	else
	{
		if (_str.size() > 1)
		{
			throw Convert::ImpossibleExcept();
			return ('\0');
		}
		this->_char = static_cast<char>(_str[0]);
		if (_int < 32 || _int > 127) {
			throw Convert::Undisplayable();
		}
	}
	return (this->_char);
}

float		Convert::converttofloat(void) {
	try {
		if (!(isFloat())) {
			throw Convert::ImpossibleExcept();
			return (0);
		}
		this->_float = static_cast<float>(std::strtof(this->_str.c_str(), NULL));
	}
	catch (std::invalid_argument &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	return (this->_float);
}

double		Convert::converttodouble(void) {
	try {
		if (!(isFloat())) {
			throw Convert::ImpossibleExcept();
			return (0);
		}this->_double = static_cast<double>(std::strtod(this->_str.c_str(), NULL));
	}
	catch (std::invalid_argument &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Convert::ImpossibleExcept();
		return (0);
	}
	return (this->_double);
}