/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:18:45 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:02:57 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_H
# define DOG_H

class	Dog : public Animal {

public:

	Dog();
	Dog(Dog const &);
	Dog& operator=(Dog const &);
	~Dog();

	virtual void	makeSound(void) const;

	Brain*	getIdeas(void) const;

private:

	Brain* _B;

};

#endif