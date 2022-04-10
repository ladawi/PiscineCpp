/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:15:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 19:04:12 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class	ScavTrap : public ClapTrap {

public:

	ScavTrap();
	ScavTrap(ScavTrap const &);
	ScavTrap(std::string name);
	ScavTrap& operator=(ScavTrap const &);
	~ScavTrap();

	void	attack(const std::string & target);
	void	guardGate(void);

};

#endif