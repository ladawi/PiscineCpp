/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:18:45 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:00:10 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

#ifndef WRONGCAT_H
# define WRONGCAT_H

class	WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(WrongCat const &);
	WrongCat& operator=(WrongCat const &); 
	~WrongCat();

	void	makeSound(void) const;

private:

};

#endif