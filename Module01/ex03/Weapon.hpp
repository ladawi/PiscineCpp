/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:33:45 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 17:23:02 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_H
# define WEAPON_H

class	Weapon {

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	const std::string& gettype(void) const;
	void setType(std::string newtype);

private:

	std::string _type;

};

#endif