/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:07:37 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:17:32 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ANIMAL_H
# define ANIMAL_H

class	Animal {

public:

	Animal();
	Animal(Animal const &);
	Animal(std::string name);
	Animal& operator=(Animal const &);
	virtual ~Animal();

	std::string	getType(void) const;
	void		setType(std::string tmp);

	virtual void	makeSound(void) const;

protected:

	std::string _type;

};

#endif