/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:25:40 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 04:18:38 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	std::cout << "Default constructor called." << std::endl;
}

Span::~Span() {
	std::cout << "Default destructor called." << std::endl;
}

Span::Span(unsigned int size) : _N(size) {
	std::cout << "Init constructor called." << std::endl;
	return ;
}

Span &	Span::operator=(Span const & rhs) {
	this->_N = getmaxsize();
	this->_content = getcontent();
	return (*this);
}

Span::Span(Span const &rhs) {
	std::cout << "Copy constructor called." << std::endl;
	this->_N = getmaxsize();
	this->_content = getcontent();
	return ;
}

void	Span::addNumber(unsigned int nb) {
	if (_content.size() < this->_N)
		_content.push_back(nb);
	else
		throw Span::FullErrorException();

	return ;
}

unsigned int 	Span::longestSpan(void) {
	unsigned int nb = 0;

	if (this->_content.size() < 2)
		throw Span::EmptyErrorException();
	else
		nb = *std::max_element(_content.begin(), _content.end()) - *std::min_element(_content.begin(), _content.end());
	return (nb);
}

unsigned int 	Span::shortestSpan(void) {
	unsigned int nb = 0;
	unsigned int tmp;
	int	x = 0;
	int	y = 0;
	if (_content.size() < 2)
		throw Span::EmptyErrorException();
	else
	{
		tmp = abs(_content[0] - _content[1]);
		while (x < _content.size())
		{
			y = 0;
			while (y < x)
			{
				nb = abs(_content[x] - _content[y]);
				if (nb < tmp)
					tmp = nb;
				y++;
			}
			x++;
		}
	}
	return (tmp);
}

void	Span::addRange(unsigned int nb, unsigned int nb2)
{	
	for (;nb < nb2; nb++)
		this->addNumber(nb);
	return ;
}