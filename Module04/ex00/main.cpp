/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:49:42 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 20:20:48 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "---------------" << std::endl;
		std::cout << "getType() used for Animal j->Dog:" <<std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "getType() used for Animal i->Cat:" <<std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "------" << std::endl;
		std::cout << "_ j (Dog) using makeSound():" <<std::endl;
		j->makeSound(); //will output the cat sound!
		std::cout << "_ i (Cat) using makeSound():" <<std::endl;
		i->makeSound();
		std::cout << "_ meta(Animal) using makeSound():" <<std::endl;
		meta->makeSound();
		std::cout << "---------------" << std::endl;
		std::cout << "Destruction:" << std::endl;
		delete j;
		delete i;
		delete meta;
	}
	{
		std::cout << "------------" << std::endl;
		std::cout << "WrongAnimal & WrongCat tests:" << std::endl;
		std::cout << "------" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << "------" << std::endl;
		std::cout << "getType() used for WongAnimal i->WrongCat:" <<std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "------" << std::endl;
		std::cout << "_ i (WrongCat) using makeSound():" <<std::endl;
		i->makeSound();
		std::cout << "_ meta (WrongAnimal) using makeSound():" <<std::endl;
		meta->makeSound();
		std::cout << "Destruction:" << std::endl;
		std::cout << "------------" << std::endl;
		delete meta;
		delete i;
	}
	
	return (0);
}
