/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:35 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/29 18:56:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>


class	Zombie	{

public:

	Zombie(std::string n);
	~Zombie(void);

	void announce(void) const;

private:

	std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif