/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 02:57:59 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/22 19:03:23 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.hpp"

template< typename T, typename Size , typename F>
void	iter(T tab, Size len, F func) {

	std::cout << "len =" << len << std::endl;
	while (len--)
	{
		std::cout << "Result: " << func(10) << " |" << std::endl;
	}
	return ;
}

int	addone(int i) {
	return (i + 1);
}

int	main()
{
	int		tab[42] = {0};
	std::cout << "===========" << std::endl;
	
	iter(&tab, 10.5f, addone);
	
	std::cout << "===========" << std::endl;
	return (0);
}