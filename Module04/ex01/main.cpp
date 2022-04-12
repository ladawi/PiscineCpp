/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:49:42 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:14:11 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int len = 8;
	Animal	*tab[len];
	int i = 0;

	while (i < len / 2)
		tab[i++] = new Dog();
	while (i < len)
		tab[i++] = new Cat();
	std::cout << "----------------" << std::endl;
	i = -1;

	while (++i < len)
		std::cout << "tab[" << i << "] = "<< tab[i]->getType() << std::endl;
	std::cout << "------" << std::endl;

	const Animal* j = new Dog();
	const Animal* u = new Cat();

	std::cout << "Dog Sound:" << std::endl;
	j->makeSound();
	std::cout << "Cat Sound:" << std::endl;
	u->makeSound();
	std::cout << "------" << std::endl;
	const Animal* e;
	std::cout << "------" << std::endl;


	delete j;
	delete u;
	std::cout << "------" << std::endl;
	i = 0;
	while (i < len)
	{
		delete tab[i];
		i++;
	}
	std::cout << "----------------" << std::endl;
	return (0);
}
