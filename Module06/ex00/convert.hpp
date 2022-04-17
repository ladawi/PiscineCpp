/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 03:59:47 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/17 04:26:37 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef CONVERT_H
# define CONVERT_H

class Convert {

	public:

	Convert();
	Convert(Convert const &);
	Convert(std::string tmp);
	Convert& operator=(Convert const &);
	~Convert();	

	void		setContent(std::string str);
	std::string	getContent(void) const;

	operator float();

	private:
		std::string	_content;

};

#endif