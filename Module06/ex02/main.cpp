/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:11:57 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 18:08:57 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}


int		main()
{

    Data s("elon", 42);
    Data *res = NULL;
    uintptr_t raw;
    
	std::cout << "------------" << std::endl;
    std::cout << "sizeof unintptr_t: " << sizeof(uintptr_t)<< std::endl;
    std::cout << "sizeof Data: " << sizeof(Data) << std::endl;

	std::cout << "----" << std::endl;
   	std::cout <<  "1: " << s.getName() << "." << std::endl;
	std::cout <<  "2: " << s.getValue() << "." << std::endl; raw = serialize(&s);
	std::cout << "----" << std::endl;
    res = deserialize(raw);
    std::cout << raw << std::endl;
	std::cout << "----" << std::endl;
	std::cout <<  "s.getName(): " << s.getName() << "." << std::endl;
	std::cout <<  "s.getValue(): " << s.getValue() << "." << std::endl;
	std::cout << "----" << std::endl;
	std::cout <<  "res->getName(): " << res->getName() << "." << std::endl;
	std::cout <<  "res->getValue(): " << res->getValue() << "." << std::endl;
	std::cout << "------------" << std::endl;
	return (0);
}