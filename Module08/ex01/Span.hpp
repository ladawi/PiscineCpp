/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:26:09 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 04:15:23 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class	Span {

public:

	Span();
	~Span();

	Span(unsigned int size);
	Span(Span const &);
	Span& operator=(Span const &);

	class FullErrorException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Full can't add number : FullErrorException");
			}
	};
	class EmptyErrorException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Content is empty or only have 1 value : EmptyErrorException");
			}
	};
	unsigned int getmaxsize(void) const {
		return (this->_N);
	};

	std::vector<int> getcontent(void) const {
		return (this->_content);
	};

	void	addNumber(unsigned int nb);
	void	addRange(unsigned int nb, unsigned int nb2);



	unsigned int	longestSpan(void);
	unsigned int	shortestSpan(void);

private:
	unsigned int		_N;
	std::vector<int>	_content;
};

#endif