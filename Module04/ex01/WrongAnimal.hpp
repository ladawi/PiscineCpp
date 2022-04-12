/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:07:37 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:01:44 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

class	WrongAnimal {

public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const &);
	WrongAnimal(std::string name);
	WrongAnimal& operator=(WrongAnimal const &);
	~WrongAnimal();

	std::string	getType(void) const;
	void		setType(std::string tmp);

	void	makeSound(void) const;

private:

	std::string _type;

};

#endif