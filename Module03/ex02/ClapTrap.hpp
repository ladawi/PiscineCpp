/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:59:23 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 17:50:01 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &);
	ClapTrap& operator=(ClapTrap const &);
	~ClapTrap();

	void			setName(std::string name);
	void			setHp(unsigned int nb);
	void			setStamina(unsigned int nb);
	void			setAtkdmg(unsigned int nb);

	unsigned int	getHp(void) const;
	std::string		getName(void) const;
	unsigned int	getStamina(void) const;
	unsigned int	getAtkdmg(void) const;

	void			attack(const std::string & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

private:
	std::string		_Name;
	unsigned int	_Hp;
	unsigned int	_Stamina;
	unsigned int	_Atkdmg;
};

#endif