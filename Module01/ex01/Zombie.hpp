/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:59:35 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 16:07:26 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>



class	Zombie	{

public:

	Zombie(void);
	Zombie(std::string n);
	~Zombie(void);

	void	announce(void) const;
	void	set_name(std::string name);

private:

	std::string _name;

};

Zombie* zombieHorde(int N, std::string name);

#endif