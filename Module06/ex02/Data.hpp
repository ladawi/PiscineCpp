/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:19:11 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 17:29:18 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef DATA_H
# define DATA_H

class	Data {

public:

	Data();
	Data(Data const &);
	Data(std::string name, int val);
	Data& operator=(Data const &);
	~Data();

	std::string	getName(void) const;
	int			getValue(void) const;

private:
	std::string _Name;
	int			_Value;

};

#endif