/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:05:43 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/17 04:29:36 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(void) {
	std::cout << "Convert Default constructor called" << std::endl;
	return ;
}

Convert::Convert(std::string tmp) : _content(tmp) {
	std::cout << "Convert Init constructor called" << std::endl;
	return ;
}

Convert::~Convert(void) {
	std::cout << "Convert Default destructor called" << std::endl;
	return ;
}

Convert::Convert(Convert const & tmp) {
	std::cout << "Convert Copy constructor called" << std::endl;
	*this = tmp;
	return ;
}

Convert &	Convert::operator=(Convert const & rhs) {
	return (*this);
}

void		Convert::setContent(std::string str) {
	this->_content = str;
	return ;
}

std::string Convert::getContent(void) const {
	return (this->_content);
}
