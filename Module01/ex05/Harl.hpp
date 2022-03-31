/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:22:27 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/31 14:42:36 by ladawi           ###   ########.fr       */
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

	void	complain(std::string level);

	void	(Harl::*funcptr[4])(void);
	std::string Tab[4];

private:

	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

};
#endif