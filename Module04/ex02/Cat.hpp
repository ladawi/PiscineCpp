/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:18:45 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 16:52:50 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_H
# define CAT_H

class	Cat : public AAnimal {

public:

	Cat();
	Cat(Cat const &);
	Cat& operator=(Cat const &); 
	~Cat();

	virtual void	makeSound(void) const;

	Brain*			getIdeas(void) const;

private:

	Brain* _B;

};

#endif