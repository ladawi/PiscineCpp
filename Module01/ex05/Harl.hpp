/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:22:27 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 19:38:21 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_H
# define HARL_H


class 	Harl{

public:

	Harl(void);
	~Harl(void);

	void complain(std::string level);

private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};
#endif