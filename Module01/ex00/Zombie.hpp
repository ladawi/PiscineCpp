/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:35 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 15:40:56 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>


class	Zombie	{

public:

	Zombie(std::string n);
	~Zombie(void);

	void	announce(void) const;
	void	set_name(std::string name);

private:

	std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif