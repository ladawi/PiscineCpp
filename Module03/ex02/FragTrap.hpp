/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:15:34 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 19:08:52 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class	FragTrap : public ClapTrap {

public:

	FragTrap();
	FragTrap(FragTrap const &);
	FragTrap(std::string name);
	FragTrap& operator=(FragTrap const &);
	~FragTrap();

	void	attack(const std::string & target);
	void	highFivesGuys(void);

};

#endif