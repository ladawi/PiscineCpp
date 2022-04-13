/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:07:37 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 16:53:39 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ANIMAL_H
# define ANIMAL_H

class	AAnimal {

public:

	AAnimal();
	AAnimal(AAnimal const &);
	AAnimal(std::string name);
	AAnimal& operator=(AAnimal const &);
	virtual ~AAnimal();

	std::string	getType(void) const;
	void		setType(std::string tmp);

	virtual void	makeSound(void) const = 0;

protected:

	std::string _type;

};

#endif