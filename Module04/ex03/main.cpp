/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:40:00 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/03 18:07:04 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <string>
#include <iostream>

int	main()
{
	Ice test1;
	Ice issou(test1);
	Cure Monaks;

	std::cout << "=====================" << std::endl << std::endl;

	std::cout << "ISSOU : " << issou.getType() << std::endl;
	std::cout << "Monaks : " << Monaks.getType() << std::endl;

	std::cout << std::endl << "------------" << std::endl << std::endl;
	AMateria *ptr = test1.clone();

	std::cout << "ptr->getType() = " << ptr->getType() << std::endl;
	delete ptr;
	ptr = Monaks.clone();

	std::cout << "ptr->getType() = " << ptr->getType() << std::endl;
	
	std::cout << std::endl << "------------" << std::endl << std::endl;

	Character Char1("Elon");

	std::cout << "Charact name : " << Char1.getName() << std::endl;\

	issou.use(Char1);
	Monaks.use(Char1);

	std::cout << std::endl << "------------" << std::endl << std::endl;

	Char1.equip(Monaks.clone());
	Char1.equip(issou.clone());
	Char1.equip(ptr);
	Char1.equip(Monaks.clone());
	Char1.unequip(2);
	// Char1.equip(ptr);

	
	std::cout << std::endl << "------------" << std::endl << std::endl;
	Character Char2(Char1);

	std::cout << "INVENTORY :" << std::endl << std::endl;
	std::cout << "   CHAR 1  |  CHAR 2" << std::endl;
	std::cout << "  -------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (Char1.getInvSlot(i) != NULL && Char2.getInvSlot(i) != NULL)
		{
			std::cout << i << "| " << Char1.getInvSlot(i) << " | " << Char2.getInvSlot(i) << std::endl;
			std::cout << "       " << Char1.getInvSlot(i)->getType() << " | " << Char2.getInvSlot(i)->getType() << std::endl;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "------------" << std::endl << std::endl;
	Character Char3("Jack");

	Char1.use(0, Char3);
	Char1.use(1, Char3);
	Char1.use(2, Char3);
	Char1.use(3, Char3);
	std::cout << std::endl << "------------" << std::endl << std::endl;
	Character Char4(Char3);

	Char4.equip(Monaks.clone());
	Char4.equip(Monaks.clone());
	Char4.equip(issou.clone());
	Char4 = Char1;
	std::cout << std::endl << "------------";
	std::cout << std::endl << "------------" << std::endl << std::endl;

	MateriaSource MaS1;
	AMateria *ptr2;

	MaS1.learnMateria(ptr);
	
	ptr2 = MaS1.createMateria("cure");

	std::cout << std::endl << "=====================" << std::endl;
	delete ptr;
	delete ptr2;
	std::cout << std::endl << "=====================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	AMateria* ptr3 = new Ice();
	src->learnMateria(ptr3);
	delete ptr3;
	ptr3 = new Cure();
	src->learnMateria(ptr3);
	delete ptr3;

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}