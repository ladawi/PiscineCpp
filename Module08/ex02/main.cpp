/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:30:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/27 23:18:46 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "MutantStack.hpp"
#include <list>

void reportStackSize(MutantStack<int>& s)
{
    std::cout << s.size() << " elements on stack\n";
}
 
void reportStackTop(MutantStack<int>& s)
{
    // Leaves element on stack
    std::cout << "Top element: " << s.top() << '\n';
}

int	main()
{
	MutantStack<int> one;

	if (one.empty())
		std::cout << "One is empty" << std::endl;
	else
		std::cout << "One is NOT empty" << std::endl;
	one.push(1);
	one.push(1);
	one.push(1);
	if (one.empty())
		std::cout << "One is empty" << std::endl;
	else
		std::cout << "One is NOT empty" << std::endl;
	std::cout << one.size() << std::endl;
	MutantStack<int> s;
    s.push(2);
    s.push(6);
    s.push(51);
 
    std::cout << s.size() << " elements on stack\n";
    std::cout << "Top element: " << s.top() << '\n';
 
    reportStackSize(s);
    s.pop();
 
    reportStackSize(s);
    std::cout << "Top element: " << s.top() << '\n';
	std::cout << "======= MutantStack =======" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
	}
		++it;
	std::stack<int> e(mstack);
	std::cout << "====== std::list ========" << std::endl;
		std::list<int> istack;
	istack.push_back(5);
	istack.push_back(17);
	std::cout << istack.back() << std::endl;
	istack.pop_back();
	std::cout << istack.size() << std::endl;
	istack.push_back(3);
	istack.push_back(5);
	istack.push_back(737);
	//[...]
	istack.push_back(0);
	std::list<int>::iterator it2 = istack.begin();
	std::list<int>::iterator ite2 = istack.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return (0);
}