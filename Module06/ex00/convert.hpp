/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 03:59:47 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/19 16:42:46 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdlib.h>
#include <exception>

#ifndef CONVERT_H
# define CONVERT_H

class Convert {

	public:

	Convert();
	Convert(Convert const &);
	Convert(std::string tmp);
	Convert& operator=(Convert const &);
	~Convert();	

	class ImpossibleExcept : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("impossible");
			}
	};
	class Undisplayable : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Non displayable");
			}
	};
	void		setStr(std::string str);
	std::string	getStr(void) const;

	bool		isdigit();
	bool		isFloat();

	int			converttoint(void);
	char		converttochar(void);
	float		converttofloat(void);
	double		converttodouble(void);

	private:
		std::string	_str;
		int			_int;
		float		_float;
		char		_char;
		double		_double;
};

#endif